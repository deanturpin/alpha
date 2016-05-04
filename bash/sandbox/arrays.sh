#!/bin/bash

array=(
one
two
three
four
)

# Print each element
echo ${array[@]}

# Print indices
echo ${!array[@]}

# Clear an element
unset -v array[2]
echo ${array[*]}

# Square brackets are a math context (no $)
i=2
echo ${array2[i + 1]}

# Parameter expansion - turn all Os into Xs
echo ${array[*]/o/x}

set -- hello hola bonjour
echo count _ $#
echo param _ $*
echo last  _ ${@:(-1)}

set -- *.sh
echo There are $# shell scripts
