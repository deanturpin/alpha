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
vi <<VI
i
hello

:w hello.txt
:q
VI

cat hello.txt
rm hello.txt

# Assign to a variable
var=$(cat <<!
This
And
That
!
)

echo $var

# Supply to a function
function printer {
	read one
	read two
	read three
	echo \"$one\"
	echo \"$two\"
	echo \"$three\"
}

printer <<PRINTME
ONE
TWO
THREE
PRINTME

# Anonymous heredoc - check variables
hello=yes
: <<TESTVARS
$(hello?)
$(goodbye?)
TESTVARS

# Anonymous heredoc as a comment block
: <<"JUSTACOMMENT"
Blah
JUSTACOMMENT

# Suppress tabs
cat <<-NOTABS
one
		two
				three
NOTABS

# Escape characters
temp=$(mktemp)
cat <<NOESCAPE > $temp
blah\nblahblah

Doesn't work, in fact nothing after the ^M is printed
NOESCAPE

cat $temp
rm -f $temp
