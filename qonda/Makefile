%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

qonda: qonda.o
	clang++ -o $@ $<

clean:
	rm -f qonda qonda.o
