CC=clang++
RM=rm -f

%.o:%.cpp
	$(CC) -Wall -Wextra -pedantic -pedantic-errors -std=c++1z -o $*.o -c $*.cpp

# Target name is the same for all projects (makes .gitignore simple)
target := foo

# Compile and link all source files into a single executable
objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
$(target) : $(objects)
	$(CC) -o $@ $(objects)

.PHONY: cppcheck
cppcheck:
	cppcheck --enable=all .

clean:
	$(RM) $(target) $(objects)
