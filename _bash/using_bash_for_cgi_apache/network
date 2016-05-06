#!/bin/bash

# Set CSS style and terminal colour
function red { tput setaf 1; color="red"; }
function grey { tput sgr0; color="grey"; }
function green { tput setaf 2; color="green"; }

# MIME type and page header
cat <<HEADER
Content-type:text/html

<html>
<body>
<p style='background-color:black; font-family:sans-serif;'>
HEADER

mapfile hostlist < hosts

# Read hosts line by line
for host in ${hostlist[@]}
do
	# Check if line starts with an IP
	if [[ $host =~ ^[[:digit:]\.]+ ]]
	then
		[[ $(ping -w 1 -c 1 $BASH_REMATCH | grep '1 received') != "" ]] && green || red
	else
		grey
	fi

	echo "<span style='color:$color;'>$host</span><br />"
done

grey

cat <<FOOTER
</p>
</body>
</html>
FOOTER
