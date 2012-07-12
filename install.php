<?php
/*
+ ----------------------------------------------------------------------------+
|	install.php
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
|	Version : 0.1.8
|	Date    : 2012/07/12
+----------------------------------------------------------------------------+
*/
$ip = @$_SERVER['REMOTE_ADDR']; // IP Address
?>
<html>
	<style media="screen" type="text/css">
		body {background:#D8D8D8}
		h1 {font:bold 24px sans-serif;text-align:center}
		input {font:bold 14px sans-serif;text-align:center}
		.button {text-align:center}
		.container {background:#FFFFFF;width:960px;margin:50px auto 50px auto;padding:3px}
	</style>
	<head>
		<title>ZT Logger Installer</title>
	</head>
	<body>
		<div class="container">
			<h1>ZT Logger v0.1.8</h1>
			<hr>
			Copyright &#169; 2011-2012 Kevin J. Zoll (kzoll@zolltech.com)<br />Copyright &#169; 2011 Zoll Technologies (<a href="http://zolltech.com" target="_blank">zolltech.com</a>)<br /><br />This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.<br /><br />This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.<br /><br />You should have received a copy of the GNU General Public License along with this program.  If not, see &lt;<a href="http://www.gnu.org/licenses/" target="_blank">http://www.gnu.org/licenses/</a>&gt;.<br /><br />This product includes GeoLite data created by MaxMind, available from <a href="http://maxmind.com/" target="_blank">http://maxmind.com/</a><br /><br />Version: 0.1.8<br />Date&nbsp;&nbsp;&nbsp;&nbsp;: 2012/07/12
			<hr>The installation routine is straight foward and really painless.  We need to create the following files in the ZT Logger Vault: counter.dat, directory.inc, hook.txt, and ipwldb.csv.  The IP Address from which the ZT Logger installation routine (this file) is ran will automatically be whitelisted.  All pages being accessed from IP Address: <?php echo $ip ?> will not be logged by ZT Logger.<hr>
			<div class="button"><form action="install2.php" method="get"><input type="submit" value="Install ZT Logger" title="Install ZT Logger"></form></div>
		</div>
	</body>
</html>