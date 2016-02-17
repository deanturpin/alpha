%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

qonda: qonda.o
	g++ -o $@ $<

clean:
	rm -f qonda{,.o}
