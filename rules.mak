CC=clang++

%.o:%.cpp
	$(CC) -Wall -Wextra -pedantic -pedantic-errors -std=c++1z -o $*.o -c $*.cpp

objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
foo : $(objects)
	$(CC) -o $@ $(objects)

clean:
	$(RM) foo $(objects)

RM=rm -f
