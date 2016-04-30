# Random numbers
echo $RANDOM

# Leading zeros
echo {000..009}

# Base
echo $(( 16#a8 ))
echo $(( 2#11111111 + 2#1000 ))

# Decimal to binary
dec2bin=({0,1}{0,1}{0,1}{0,1}{0,1}{0,1}{0,1}{0,1})
echo ${dec2bin[170]} 

echo ${dec2bin[*]} 
