# README for ZT Logger #

----------

Version : 0.1.11<br />
Date    : 2013/09/24

Copyright (C) 2011-2012 Kevin J. Zoll (kzoll@zolltech.com)<br />
Copyright (C) 2011-2012 Zoll Technologies (<http://zolltech.com>)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.

This product includes GeoLite data created by MaxMind, available from <http://maxmind.com/>

**Download:** [http://www.malwareteks.com/download.php?view.17](http://www.malwareteks.com/download.php?view.17 "ZT Logger v0.1.10")

**Bug Tracker:** [http://www.malwareteks.com/mteks_plugins/bug_tracker/bugs.php?0.view.3.0.0](http://www.malwareteks.com/mteks_plugins/bug_tracker/bugs.php?0.view.3.0.0 "ZT Logger Bug Tracker")

**Include Files:**<br />
/ztlogger<br />
Disclaimer.txt<br />
GeoIP_License.txt<br />
index.html<br />
install.php<br />
install2.php<br />
License.txt<br />
README.txt<br />
ztlogger.php<br />
/logs<br />
.htaccess<br />
index.html<br />
/vault<br />
.htaccess<br />
geoip.inc<br />
geoipcity.inc<br />
geoipregionvars.php<br />
GeoLiteCity.dat<br />
index.html<br />
ztlogger.ini

**Installation:**<br />
Unpack ztlogger.zip and copy the ztlogger folder and its entire contents to your server. Ensure that all folders are chmod 0755 and all files are chmod 0644. Run install.php from your web browser.  Click the Install button.

The following files are created in the ZT Logger Vault directory during install:<br />
counter.dat<br />
directory.inc<br />
hook.txt<br />
ipwldb.csv

The IP Address from which the ZT Logger installation routine is ran will automatically be whitelisted.  All pages being accessed from that IP Address will not be logged by ZT Logger.

Check the ZT Logger Vault for hook.txt.  You will need to add the include statement at the beginning of the appropriate file of your CMS, Forum, or Blogging software, to start logging site activity.

bbPress 1.x - bb-load.php<br />
e107 - class2.php<br />
Drupal - index.php<br />
Flatpress - defaults.php<br />
IPB  - index.php (root and admin)<br />
Joomla - index.php (root and current template)<br />
phpBB - common.php<br />
SMF - settings.php<br />
vBulletin - global.php<br />
Wordpress - wp-load.php

Make sure you delete install.php and install2.php from the ztlogger directory on your server. The installer is intentionally designed to not overwrite counter.dat, directory.inc, hook.txt, and ipwldb.csv if they are already present.  However, do not take any chances and make sure you delete install.php and install2.php.

**Upgrade:**<br />
Copy ztlogger/ztlogger.php > ztlogger/ztlogger.php<br />

**Whitelisting IPs:**<br />
To add an IP address to the whitelist, you will need to manually edit ipwldb.csv.  This is a comma-separated values (comma-delimited) file.  Meaning all values in the csv database are separated by a comma.  So, don't forget to add a space at the beginning and a comma at the end of each and every IP address you enter. Each and every entry must have a space before and a comma after each and every IP address.  I can't stress that enough.

**Forthcoming:**<br />
Whitelisting form to alleviate the need to manually edit ipwldb.csv.  Whitelisting will be password protected.  The Whitelist password will be stored in ztlogger.ini.

**What has Changed:**<br />
0.1.11 (2103/09/24) - Changed geoip.inc line #31 from define("GEOIP_COUNTRY_EDITION", 106); to define("GEOIP_COUNTRY_EDITION", 1);<br /><br />
0.1.10 (2012/08/03) - Improved error handling<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Fixed Bug, introduced in last update, in determining $GEOIP_REGION_NAME<br /><br />
0.1.9 (2012/07/31) - Suppress PHP Notice: Undefined variable: proxyip in ztlogger.php on line 188<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Suppress PHP Notice: Undefined index: in ztlogger.php on line 199<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Suppress PHP Notice: Undefined index: proxyip in ztlogger.php on line 228<br /><br />
0.1.8 (2012/07/12) - Added Detection for TorExitNode<br /><br />
0.1.7 (2012/06/07) - Added Detection of Incapsula and nginx Reverse Proxies<br /><br />
0.1.6 (2012/03/16) - Better error handling<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Refined ReservedIP function<br /><br />
0.1.5 (2012/03/07) - Fixed XSS vulnerability in ZT Logger <=0.1.4<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Refinement in Geo Location format & output<br /><br />
0.1.4 (2012/02/18) - Further improvements in Client IP, Proxy IP and Real IP detection.<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Minor fix in log formatting<br /><br />
0.1.3 (2012/02/13) - Improvements to Proxy detection<br /><br />
0.1.2 (2011/08/08) - GeoIP GeoLocation Data: now displays City, Region, Country.<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Attempts to identify ProxyIP and Real IP (may need further work).<br /><br />
0.1.1 (2011/07/02) - Changes in variables names to eliminate conflicts with variable names in other packages.<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Changes in log format.<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Now includes version of ztlogger that is running.