CC = clang++
RM = rm -f
standard = -std=c++1y
FLAGS = -Wall -Wextra -pedantic -pedantic-errors ${standard} -O2

%.o:%.cpp
	$(CC) $(FLAGS) -o $*.o -c $*.cpp

# Compile and link all source files into a single executable
objects := $(patsubst %.cpp, %.o, $(wildcard *.cpp))
foo: $(objects)
	$(CC) -o $@ $(objects) $(LFLAGS)

clean:
	$(RM) foo $(objects)

iwyu: $(objects)
	$(foreach cpp, $(wildcard *.cpp), echo iwyu $(cpp) && iwyu ${standard} $(cpp) 2>&1 | grep -- '- #include' || true;)

fresh: clean foo
