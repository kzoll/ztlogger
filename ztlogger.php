<?php
/*
+ ----------------------------------------------------------------------------+
|	ztlogger.php
|
|	Copyright (C) 2011-2012 Kevin J. Zoll (kzoll@zolltech.com)
|	Copyright (C) 2011-2012 Zoll Technologies (zolltech.com)
|
|	This program is free software: you can redistribute it and/or modify
|	it under the terms of the GNU General Public License as published by
|	the Free Software Foundation, either version 3 of the License, or
|	(at your option) any later version.
|
|	This program is distributed in the hope that it will be useful,
|	but WITHOUT ANY WARRANTY; without even the implied warranty of
|	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
|	GNU General Public License for more details.
|
|	You should have received a copy of the GNU General Public License
|	along with this program.  If not, see <http://www.gnu.org/licenses/>.
|
|	This product includes GeoLite data created by
|	MaxMind, available from http://maxmind.com/
|
|	Version : 0.1.9
|	Date    : 2012/07/31
+----------------------------------------------------------------------------+
*/

include("vault/directory.inc"); //Directory information
include($path_to_ztlogger."vault/geoipcity.inc"); //GeoIPCity information

$version = "0.1.9";

$vaultdir = $path_to_ztlogger."vault/"; // path to vault directory
$logdir = $path_to_ztlogger."logs/"; // path to logs directory

$log_date = date("Ymd");

$ctr = $vaultdir."counter.dat"; // path to ztcounter.dat
$ipwldb = $vaultdir."ipwldb.csv"; // path to ipwldb.csv
$logfile = $logdir."ztlogfile_".$log_date.".txt"; // path to ztlogfile

$remote_ip = @$_SERVER['REMOTE_ADDR'];

$gi = geoip_open($path_to_ztlogger."vault/GeoLiteCity.dat",GEOIP_STANDARD); // open GeoLiteCity Database

// IsTorExitNode = True if user is on TOR
// Originally coded by IronGeek (at) IronGeek.com
// Used to detect if a user is on TOR
function IsTorExitNode(){
	if (gethostbyname(ReverseIPOctets($_SERVER['REMOTE_ADDR']).".".$_SERVER['SERVER_PORT'].".".ReverseIPOctets($_SERVER['SERVER_ADDR']).".ip-port.exitlist.torproject.org")=="127.0.0.2") {
		return true;
		} else {
		return false;
	}
}

// ReverseIPOctets = Reverse the order of IP octets
// Originally coded by IronGeek (at) IronGeek.com
// Used by IsTorExitNode
function ReverseIPOctets($inputip){
	$ipoc = explode(".",$inputip);
	return $ipoc[3].".".$ipoc[2].".".$ipoc[1].".".$ipoc[0];
}

// TorOrNot
if (IsTorExitNode()) {
	$IsTorExitNode = "Remote IP    : ".$remote_ip." IsTorExitNode = True";
	}else{
	$IsTorExitNode = "Remote IP    : ".$remote_ip." IsTorExitNode = False";
}

function validip($ip) {
	if (!empty($ip) && ip2long($ip)!=-1) {
		$reserved_ips = array (
		array('0.0.0.0','0.255.255.255'),
		array('10.0.0.0','10.255.255.255'),
		array('127.0.0.0','127.255.255.255'),
		array('169.254.0.0','169.254.255.255'),
		array('172.16.0.0','172.31.255.255'),
		array('192.0.2.0','192.0.2.255'),
		array('192.88.99.0','192.88.99.255'),
		array('192.168.0.0','192.168.255.255'),
		array('198.18.0.0','198.19.255.255'),
		array('198.51.100.0','198.51.100.255'),
		array('203.0.113.0','203.0.113.255'),
		array('224.0.0.0','239.255.255.255'),
		array('240.0.0.0','255.255.255.255')
		);

		foreach ($reserved_ips as $r) {
			$min = ip2long($r[0]);
			$max = ip2long($r[1]);
			if ((ip2long($ip) >= $min) && (ip2long($ip) <= $max)) return false;
		}
		return true;
	} else {
		return false;
	}
}

// Convert IP string to an Array and get the first IP
if(!empty($_SERVER['HTTP_X_FORWARDED_FOR'])) {
	$forwarded_ip = @$_SERVER['HTTP_X_FORWARDED_FOR'];
	$ip_array = explode(", ",$forwarded_ip);
	$forwarded_ip = $ip_array[0];
}

// Attempt to resolve Client IP
if(!empty($_SERVER['HTTP_X_FORWARDED_FOR']) && validip($forwarded_ip) == FALSE) {
	$clientip = $forwarded_ip;
	$header_client = "(HTTP_X_FORWARDED_FOR)";
} else if(!empty($_SERVER['REMOTE_ADDR']) && validip($_SERVER['REMOTE_ADDR']) == FALSE) {
	$clientip = @$_SERVER['REMOTE_ADDR'];
	$header_client = "(REMOTE_ADDR)";
} else if(!empty($_SERVER['HTTP_CLIENT_IP'])) {
	$clientip = @$_SERVER['HTTP_CLIENT_IP'];
	$header_client = "(HTTP_CLIENT_IP)";
}

// Attempt to resolve Proxy IP and Real IP
if(!empty($_SERVER['HTTP_X_FORWARDED_FOR']) && validip($forwarded_ip)) {
	$real_ip = $forwarded_ip;
	$header_ip = "(HTTP_X_FORWARDED_FOR)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(!empty($_SERVER['HTTP_X_FORWARDED']) && validip($_SERVER['HTTP_X_FORWARDED'])) {
	$real_ip = @$_SERVER['HTTP_X_FORWARDED'];
	$header_ip = "(HTTP_X_FORWARDED)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(!empty($_SERVER['HTTP_X_CLUSTER_CLIENT_IP']) && validip($_SERVER['HTTP_X_CLUSTER_CLIENT_IP'])) {
	$real_ip = @$_SERVER['HTTP_X_CLUSTER_CLIENT_IP'];
	$header_ip = "(HTTP_X_CLUSTER_CLIENT_IP)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(!empty($_SERVER['HTTP_FORWARDED_FOR']) && validip($_SERVER['HTTP_FORWARDED_FOR'])) {
	$real_ip = @$_SERVER['HTTP_FORWARDED_FOR'];
	$header_ip = "(HTTP_FORWARDED_FOR)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(!empty($_SERVER['HTTP_FORWARDED']) && validip($_SERVER['HTTP_FORWARDED'])) {
	$real_ip = @$_SERVER['HTTP_FORWARDED'];
	$header_ip = "(HTTP_FORWARDED)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(!empty($_SERVER['HTTP_CF_CONNECTING_IP']) && validip($_SERVER['HTTP_CF_CONNECTING_IP'])) { // CloudFlare Reverse Proxy
	$real_ip = @$_SERVER['HTTP_CF_CONNECTING_IP'];
	$header_ip = "(HTTP_CF_CONNECTING_IP)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(!empty($_SERVER['HTTP_INCAP_CLIENT_IP']) && validip($_SERVER['HTTP_INCAP_CLIENT_IP'])) { // Incapsula Reverse Proxy
	$real_ip = @$_SERVER['HTTP_INCAP_CLIENT_IP'];
	$header_ip = "(HTTP_INCAP_CLIENT_IP)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(!empty($_SERVER['HTTP_X_REAL_IP']) && validip($_SERVER['HTTP_X_REAL_IP'])) { // nginx Reverse Proxy
	$real_ip = @$_SERVER['HTTP_X_REAL_IP'];
	$header_ip = "(HTTP_X_REAL_IP)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(!empty($_SERVER['X_FORWARDED_FOR']) && validip($_SERVER['X_FORWARDED_FOR'])) {
	$real_ip = @$_SERVER['X_FORWARDED_FOR'];
	$header_ip = "(X_FORWARDED_FOR)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
} else if(!empty($_SERVER['X_HTTP_FORWARDED_FOR']) && validip($_SERVER['X_HTTP_FORWARDED_FOR'])) {
	$real_ip = @$_SERVER['X_HTTP_FORWARDED_FOR'];
	$header_ip = "(X_HTTP_FORWARDED_FOR)";
	$proxyip = @$_SERVER['REMOTE_ADDR'];
	$header_proxy = "(REMOTE_ADDR)";
	$ph = strtolower(gethostbyaddr($proxyip)); // Proxy Host Name
} else if(validip($_SERVER['REMOTE_ADDR'])) {
	$real_ip = @$_SERVER['REMOTE_ADDR'];
	$header_ip = "(REMOTE_ADDR)";
}

// Check to see if $proxyip and $real_ip are the same
if (!empty($proxyip) == $real_ip) {
	$real_ip = @$_SERVER['REMOTE_ADDR'];
	$header_ip = "(REMOTE_ADDR)";
	$proxyip = "";
	$header_proxy = "";
	$ph = "";
}

$rh = strtolower(gethostbyaddr($real_ip)); // Host Name
$record = geoip_record_by_addr($gi, $real_ip);
$country_name = $record->country_name;
$region_name = !isset($GEOIP_REGION_NAME[$record->country_code][$record->region]);
$city_name = $record->city;

if (!empty($country_name)) {
	$country_name = $country_name;
} else {
	$country_name = "";
}

if (!empty($region_name)) {
	$region_name = $region_name.", ";
} else {
	$region_name = "";
}

if (!empty($city_name)) {
	$city_name = $city_name.", ";
} else {
	$city_name = "";
}

if (!isset($proxyip)) {
	$proxyip = "";
} else {
	$precord = geoip_record_by_addr($gi, $proxyip);
}

if (isset($precord)) {
	$pcountry_name = $precord->country_name;
	$pregion_name = !isset($GEOIP_REGION_NAME[$precord->country_code][$precord->region]);
	$pcity_name = $precord->city;
}

if (!empty($pcountry_name)) {
	$pcountry_name = $pcountry_name;
} else {
	$pcountry_name = "";
}

if (!empty($pregion_name)) {
	$pregion_name = $pregion_name.", ";
} else {
	$pregion_name = "";
}

if (!empty($pcity_name)) {
	$pcity_name = $pcity_name.", ";
} else {
	$pcity_name = "";
}

//$ua = @$_SERVER['HTTP_USER_AGENT']; // Unsantitized User Agent
$ua = htmlentities(@$_SERVER['HTTP_USER_AGENT']); // Santitized User Agent
$thishost = @$_SERVER['HTTP_HOST']; // Host URL
$file_uri = @$_SERVER['REQUEST_URI']; // Requested URL
//$referer = @$_SERVER['HTTP_REFERER']; // Unsantitized Referer
$referer = htmlentities(@$_SERVER['HTTP_REFERER']); // Santitized Referer

// Create logfile, write execution kill.
if (!file_exists($logfile)){
	$file = fopen($logfile,'a');
	$diestring="<?php die(''); ?>\n\n--------------------********************------------------------\n";
	fwrite($file,$diestring);
	fclose($file);
	chmod($logfile, 0644);
}

// Let's get POST information if available
if(!empty($_POST)) {
	$poststring = "";
	foreach($_POST as $key => $value) {$poststring.= $key." = ".$value."\n";}
}

// Let's get FILES information if available
if(!empty($_FILES)) {
	$filesstring = "";
	foreach($_FILES as $key => $value) {$filesstring.= $key." = ".$value."\n";}
}

// *FUNCTION checkipwldb($ip,$ipwldb)
// check database $ipwldb for existance of $funcIP, return count.
// *** IP MUST BE FOLLOWED BY A COMMA! ***
function checkipwldb($ip,$ipwldb){
	/// Load Database
	$ztaaa = "";
	if (file_exists($ipwldb)){$ztaaa = @file_get_contents($ipwldb);}
	/// Count Matches
	$funcIP = " ".$ip.",";
	$ztaab = 0;
	$ztaab = @substr_count($ztaaa,$funcIP);
	unset($ztaaa);
	/// return count
	return $ztaab;
}

//Set whitelisting variable if IP Address whitelisted.
$ztaac = 0;
$ztaac = checkipwldb($real_ip,$ipwldb);
if ($ztaac >= 1){
	$whitelisted = 1;
	}else{
	$whitelisted = 0;
}

if ($whitelisted != 1)	{
	// increment counter.
	$file = fopen($ctr,'r+');
	$counter = fgets($file);
	fclose($file);
	$counter = $counter + 1;
	$file = fopen($ctr,'r+');
	fwrite($file,$counter);
	fclose($file);
	
if (!isset($poststring)) {
	$poststring = "";
}
	
if (!isset($filesstring)) {
	$filesstring = "";
}
	
if (!isset($clientip)) {
	$clientip = "";
}
	
if (!isset($header_client)) {
	$header_client = "";
}
	
if (!isset($header_proxy)) {
	$header_proxy = "";
}
	
if (!isset($ph)) {
	$ph = "";
}

	// log it!!!
	$fp = fopen($logfile, 'a');
	fwrite($fp,"#: ".$counter." @: ".date("F j, Y, H:i:s e P")." Running: Version ".$version."\n".$poststring.$filesstring.$IsTorExitNode."\nIP Address   : ".$real_ip."\t".$city_name.$region_name.$country_name."\t".$header_ip."\nRemote Host  : ".$rh."\nClient IP    : ".$clientip."\t".$header_client."\nProxy IP     : ".$proxyip."\t".$pcity_name.$pregion_name.$pcountry_name."\t".$header_proxy."\nProxy Host   : ".$ph."\nUser Agent   : ".$ua."\nReferer      : ".$referer."\nRequested URL: http://".$thishost.$file_uri."\n--------------------********************------------------------"."\n");
	fclose($fp);
}

geoip_close($gi); // close GeoLiteCity Database

?>