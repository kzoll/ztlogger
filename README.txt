--------------------
README for ZT Logger
--------------------
Version : 0.1.9
Date    : 2012/07/31

Copyright (C) 2011-2012 Kevin J. Zoll (kzoll@zolltech.com)
Copyright (C) 2011-2012 Zoll Technologies (zolltech.com)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.

This product includes GeoLite data created by MaxMind, available from http://maxmind.com/
----------------------------------------------------------------------

Include Files:
/ztlogger
Disclaimer.txt
GeoIP_License.txt
index.html
install.php
install2.php
License.txt
README.txt
ztlogger.php
/logs
.htaccess
index.html
/vault
.htaccess
geoip.inc
geoipcity.inc
geoipregionvars.php
GeoLiteCity.dat
index.html
ztlogger.ini
----------------------------------------------------------------------

Installation:
Unpack ztlogger.zip and copy the ztlogger folder and its entire contents to your server. Ensure that all folders are chmod 0755 and all files are chmod 0644. Run install.php from your web browser.  Click the Install button.


The following files are created in the ZT Logger Vault directory during install:
counter.dat
directory.inc
hook.txt
ipwldb.csv

The IP Address from which the ZT Logger installation routine is ran will automatically be whitelisted.  All pages being accessed from that IP Address will not be logged by ZT Logger.

Check the ZT Logger Vault for hook.txt.  You will need to add the include statement at the beginning of the appropriate file of your CMS, Forum, or Blogging software, to start logging site activity.

bbPress 1.x - bb-load.php
e107 - class2.php
Drupal - index.php
Flatpress - defaults.php
IPB  - index.php (root and admin)
Joomla - index.php (root and current template)
phpBB - common.php
SMF - settings.php
vBulletin - global.php
Wordpress - wp-load.php

Make sure you delete install.php and install2.php from the ztlogger directory on your server. The installer is intentionally designed to not overwrite counter.dat, directory.inc, hook.txt, and ipwldb.csv if they are already present.  However, do not take any chances and make sure you delete install.php and install2.php.
----------------------------------------------------------------------

Upgrade:
Copy ztlogger/ztlogger.php > ztlogger/ztlogger.php

----------------------------------------------------------------------

Whitelisting IPs:
To add an IP address to the whitelist, you will need to manually edit ipwldb.csv.  This is a comma-separated values (comma-delimited) file.  Meaning all values in the csv database are separated by a comma.  So, don't forget to add a space at the beginning and a comma at the end of each and every IP address you enter. Each and every entry must have a space before and a comma after each and every IP address.  I can't stress that enough.
----------------------------------------------------------------------

Forthcoming:
Whitelisting form to alleviate the need to manually edit ipwldb.csv.  Whitelisting will be password protected.  The Whitelist password will be stored in ztlogger.ini.
----------------------------------------------------------------------

What has Changed:

0.1.9 (2012/07/31) - Suppress PHP Notice: Undefined variable: proxyip in ztlogger.php on line 188
					 Suppress PHP Notice: Undefined index: in ztlogger.php on line 199
					 Suppress PHP Notice: Undefined index: in ztlogger.php on line 228

0.1.8 (2012/07/12) - Added Detection for TorExitNode

0.1.7 (2012/06/07) - Added Detection of Incapsula and nginx Reverse Proxies

0.1.6 (2012/03/16) - Better error handling
					 Refined ReservedIP function

0.1.5 (2012/03/07) - Fixed XSS vulnerability in ZT Logger <=0.1.4
					 Refinement is Geo Location format & output

0.1.4 (2012/02/18) - Further improvements in Client IP, Proxy IP and Real IP detection.
					 Minor fix in log formatting

0.1.3 (2012/02/13) - Improvements to Proxy detection

0.1.2 (2011/08/08) - GeoIP GeoLocation Data: now displays City, Region, Country.
					 Attempts to identify ProxyIP and Real IP (may need further work).

0.1.1 (2011/07/02) - Changes in variables names to eliminate conflicts with variable names in other packages.
					 Changes in log format.
					 Now includes version of ztlogger that is running.