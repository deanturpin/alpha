#!/bin/bash

# Assignement
var=blah

# Use value of var (braces optional)
echo $var

# Use variable if defined, otherwise use value
echo ${var-'variable not set'}
echo ${car-'variable not set'}

# Use variable if defined, otherwise use value and assign to variable
echo ${car='default'}
echo ${car-'variable not set'}

# Test variable and exit if not defined
# echo ${bar?'not defined'}
# echo ${bar?}

# Use value if var is set, otherwise use nothing
echo -e \"${bar+'variable is set'}\"
echo -e \"${var+'variable is set'}\"

# Length of variable
echo ${#var}

# Number of positional parameters (pass a parameter on the command line)
echo ${#*}
echo ${#@}

echo '##########'

var=etc/aabbaa_abbb.cpp

# Use value of var after removing text matching pattern from the left
echo ${var#*/} # like basename
echo ${var%.cpp}

# Convert to uppercase - one match
echo ${var^a}

# Convert case - all matches
echo ${var^^a}
echo ${var^^[[:alpha:]]}

var=ETC/AABBAA_ABBB.CPP
