%.o:%.cpp
	g++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

all: unicode

unicode: unicode.o
	g++ -o $@ $<

clean:
	rm -f unicode{,.o}
