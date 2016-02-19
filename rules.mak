CC=clang++

%.o:%.cpp
	$(CC) -Wall -Wextra -pedantic -pedantic-errors -std=c++1z -o $*.o -c $*.cpp

# Target name is the enclosing directory
target := $(shell basename `pwd`)

# Compile and link all source files into a single executable
objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
$(target) : $(objects)
	$(CC) -o $@ $(objects)

clean:
	$(RM) $(target) $(objects)

RM=rm -f
