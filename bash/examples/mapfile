#!/bin/bash

# Mapfile
mapfile array2 < <(echo -e "1 2 3\n4 5 6\n7 8 9")
echo lines ${#array2[*]}

# This every single number
for line in ${array2[*]}
do
	echo $line
done

# But it needs to be quoted to print the line
for line in "${array2[*]}"
do
	echo $line
done

