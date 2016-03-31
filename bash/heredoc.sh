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
