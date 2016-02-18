CC=clang++

# cpp to object
%.o:%.cpp
	$(CC) -Wall -Wextra -pedantic -pedantic-errors -std=c++1z -o $*.o -c $*.cpp

RM=rm -f
