%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

elevation: elevation.o
	clang++ -o $@ $<

clean:
	rm -f elevation elevation.o
