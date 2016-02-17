%.o:%.cpp
	clang++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o $*.o -c $*.cpp

all: unicode bitmap

unicode: unicode.o
	clang++ -o $@ $<

bitmap: bitmap.o
	clang++ -o $@ $<

clean:
	rm -f unicode unicode.o
	rm -f bitmap bitmap.o
