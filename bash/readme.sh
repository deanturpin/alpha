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

# Loops
heading Loops
for i in 1 2 3 4 5
do
	echo Iteration $i
done

# tput -S <<!
#             > clear
#             > cup 10 10
#             > bold
#             > !

