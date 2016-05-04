#!/bin/bash

# hi111bye hi222bye hi333bye hi444bye
echo hi{111,222,333,444}bye

# 1 2 3 4 5
echo {1..5}

# Range with increment
# 1 3 5 7 9
echo {1..10..2}

# Zero padding
# 000 040 080 120 160 200
echo {000..200..40}
