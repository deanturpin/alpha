%.o:%.cpp
	g++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

all: unicode bitmap

unicode: unicode.o
	g++ -o $@ $<

bitmap: bitmap.o
	g++ -o $@ $<

clean:
	rm -f unicode unicode.o
	rm -f bitmap bitmap.o
