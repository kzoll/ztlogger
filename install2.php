<?php
/*
+ ----------------------------------------------------------------------------+
|	install2.php
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
|	Version : 0.1.10
|	Date    : 2012/08/03
+----------------------------------------------------------------------------+
*/
$path = getcwd();
$directory = $path."/";
$ctr = $directory."vault/counter.dat";
$dirinc = $directory."vault/directory.inc";
$hook = $directory."vault/hook.txt";
$ipwldb = $directory."vault/ipwldb.csv";
$ip = @$_SERVER['REMOTE_ADDR']; // IP Address
?>
<html>
	<style media="screen" type="text/css">
		body {background:#D8D8D8}
		h1 {font:bold 24px sans-serif;text-align:center}
		.container {background:#FFFFFF;width:960px;margin:50px auto 50px auto;padding:3px}
	</style>
	<head>
		<title>ZT Logger Installer</title>
	</head>
	<body>
		<div class="container">
			<h1>ZT Logger v0.1.10</h1>
			<hr>
			Copyright &#169; 2011-2012 Kevin J. Zoll (kzoll@zolltech.com)<br />Copyright &#169; 2011 Zoll Technologies (<a href="http://zolltech.com" target="_blank">zolltech.com</a>)<br /><br />This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.<br /><br />This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.<br /><br />You should have received a copy of the GNU General Public License along with this program.  If not, see &lt;<a href="http://www.gnu.org/licenses/" target="_blank">http://www.gnu.org/licenses/</a>&gt;.<br /><br />This product includes GeoLite data created by MaxMind, available from <a href="http://maxmind.com/" target="_blank">http://maxmind.com/</a><br /><br />Version: 0.1.10<br />Date&nbsp;&nbsp;&nbsp;&nbsp;: 2012/08/03
			<hr>The installation routine is straight foward and really painless.  We need to create the following files in the ZT Logger Vault: counter.dat, directory.inc, hook.txt, and ipwldb.csv.  The IP Address from which the ZT Logger installation routine (this file) is ran will automatically be whitelisted.  All pages being accessed from IP Address: <?php echo $ip ?> will not be logged by ZT Logger.<hr><br />
<?php
// Create counter.dat
if (!file_exists($ctr)){
	echo "Creating counter.dat in the Vault directory";
	$file = fopen($ctr,'a');
	$outputstring="0";
	fwrite($file,$outputstring);
	fclose($file);
	echo "<br />Setting chmod 0644 on counter.dat";
	chmod($ctr, 0644);
}

// Create directory.inc
if (!file_exists($dirinc)){
	echo "<br />Creating directory.inc in the Vault directory";
	$file = fopen($dirinc,'a');
	$length = 1;
	if (substr($directory,-$length) == "\\") {$outputstring='<?php global $path_to_ztlogger; $path_to_ztlogger="'.$directory.'\"; ?>';}
	if (substr($directory,-$length) != "\\") {$outputstring='<?php global $path_to_ztlogger; $path_to_ztlogger="'.$directory.'"; ?>';}
	fwrite($file,$outputstring);
	fclose($file);
	echo "<br />Setting chmod 0644 on directory.inc";
	chmod($dirinc, 0644);
}

// Create hook.txt
if (!file_exists($hook)){
	echo "<br />Creating hook.txt in the Vault directory";
	$file = fopen($hook,'a');
	$outputstring="<?php die(''); ?>\n\nYou must add the below code to all pages you wish to have logging enabled.  On most PHP based sites you can just add it to a single file that will be called by all pages.\n\n-----BEGIN PHP INCLUDE-----\ninclude('".$directory."ztlogger.php');\n-----END PHP INCLUDE-----";
	fwrite($file,$outputstring);
	fclose($file);
	echo "<br />Setting chmod 0644 on hook.txt";
	chmod($hook, 0644);
}

// Create ipwldb.csv
if (!file_exists($ipwldb)){
	echo "<br />Creating ipwldb.csv in the Vault directory";
	$file = fopen($ipwldb,'a');
	$outputstring=" ".$ip.",";
	fwrite($file,$outputstring);
	echo "<br />Whitelisting IP Address: ".$ip;
	fclose($file);
	echo "<br />Setting chmod 0644 on ipwldb.csv";
	chmod($ipwldb, 0644);
}
	
echo "<h1>Done . . .</h1>Check the ZT Logger Vault for hook.txt.  You will need to add the include statement to the appropriate file of your CMS, Forum, or Blogging software, to start logging site activity.<br /><br />Make sure you delete install.php and install2.php from the ztlogger directory on your server.  The installer is intentionally designed to not overwrite counter.dat, directory.inc, hook.txt, and ipwldb.csv if they are already present.  However, do not take any chances and make sure you delete install.php and install2.php."
?>
		</div>
	</body>
</html>