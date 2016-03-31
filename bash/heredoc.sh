# http://www.tldp.org/LDP/abs/html/here-docs.html

# Here document (heredoc)
echo Preformatted text
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

# Or simply an echo
echo "
seven
eight
nine
"

# Parameter substitution 
comment='eleven'
cat <<COMMENT
ten
$comment
twelve
COMMENT

# Parameter substitution disabled
comment='eleven'
cat <<"COMMENT"
ten
$comment
twelve
COMMENT

# A clunky way to script vi
vi <<BLAH
i
hello

:w hello.txt
:q
BLAH

cat hello.txt
rm hello.txt
