CC=clang++
RM=rm -f
standard=-std=c++1y
FLAGS=-Wall -Wextra -pedantic -pedantic-errors ${standard} -O2

%.o:%.cpp
	$(CC) $(FLAGS) -o $*.o -c $*.cpp

# Target name is the same for all projects (makes .gitignore simple)
target := foo

# Compile and link all source files into a single executable
objects := $(patsubst %.cpp, %.o, $(wildcard *.cpp))
$(target): $(objects)
	$(CC) -o $@ $(objects) $(LFLAGS)

clean:
	$(RM) $(target) $(objects)

include:
	$(foreach cpp, $(wildcard *.cpp), iwyu -std=c++1y $(cpp) || true;)

fresh: clean foo
