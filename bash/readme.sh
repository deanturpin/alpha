# Loops
echo Loops
for i in 1 2 3 4 5
do
	echo Iteration $i
done

echo Search and replace
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
