%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

template: template.o
	clang++ -o $@ $<

clean:
	rm -f template template.o
