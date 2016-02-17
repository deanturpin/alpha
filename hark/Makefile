%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

hark: hark.o
	g++ -o $@ $<

clean:
	rm -f hark hark.o
