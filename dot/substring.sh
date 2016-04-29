#!/bin/bash

addr1=c0a86d01
addr2=c0a86d05

# for (( i = ${#addr1} - 1; i >=0; --i ))
for (( i=0; i<${#addr1}; ++i ))
do
	end=$(( ${#addr1} - i ))
	subnet=${addr1:0:$end}

	[[ $addr2 =~ $subnet ]] && break
done

echo $subnet
