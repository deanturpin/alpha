%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

all: template

template: template.o
	clang++ -o $@ $<

clean:
	rm -f template{,.o}
