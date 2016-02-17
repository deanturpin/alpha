%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

gpg: gpg.o
	clang++ -o $@ $<

clean:
	rm -f gpg gpg.o
