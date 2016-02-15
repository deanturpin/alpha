%.o:%.cpp
	g++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

topologer: topologer.o
	g++ -o $@ $<

clean:
	rm -f topologer{,.o}
