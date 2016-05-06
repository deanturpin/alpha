#!/bin/bash

etc=blah

# Double quotes
echo "\tEtc $etc\n"

# Single quotes
echo '\tEtc $etc\n'

# Locale translation
echo $"\tEtc $etc\n"

# Like double quotes but escape sequences are processed without -e
echo $'\tEtc $etc\n'

echo end

# $ ./quoting.sh 
# \tEtc blah\n
# \tEtc $etc\n
# \tEtc blah\n
#         Etc $etc
# 
# end
