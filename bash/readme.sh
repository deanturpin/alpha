# Simple function - takes all parameters
function heading() {
	echo '#######' $*
}

# Here document (heredoc)
heading Preformatted text
cat <<ONE
one
two
three
ONE

# Use a ! delimiter if you're feeling edgy
cat <<!
four
five
six
!

heading Loops
for i in 1 2 3 4 5
do
	echo Iteration $i
done

heading Search and replace
sar='abcabcabcabcabc'

echo Original $sar
echo Replace first ${sar/a/d}
echo Replace all ${sar//a/d}
# Replace last?

# Send all stderr to stdout (or file)

# Pipes
# mkfifo /tmp/reponse

# Adhoc network connections
# cat </dev/tcp/time.nist.gov/13

# String manipulation
# http://www.thegeekstuff.com/2010/07/bash-string-manipulation/
# http://tldp.org/LDP/abs/html/string-manipulation.html
