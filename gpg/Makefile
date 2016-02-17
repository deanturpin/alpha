%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

gpg: gpg.o
	g++ -o $@ $<

clean:
	rm -f gpg gpg.o
