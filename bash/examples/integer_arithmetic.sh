#!/bin/bash

# Basic 
echo $(( 1 * 2 + 3 / 4 ))

# Default type is a string
blah=1+2
echo $blah

# Declare as an int
declare -i blah=3+4
echo $blah

blah+=5
echo $blah



