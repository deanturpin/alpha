CC=clang++
RM=rm -f
standard=-std=c++1y
FLAGS=-Wall -Wextra -pedantic -pedantic-errors $(standard)

%.o:%.cpp
	echo comp $<
	$(CC) $(FLAGS) -o $@ -c $<

# Compile and link all source files into a single executable
objects := $(patsubst %.cpp, %.o, $(wildcard *.cpp))
foo: $(objects)
	$(CC) -o $@ $(objects) $(LFLAGS)

clean:
	echo tidy $(objects)
	$(RM) foo $(objects)

iwyu:
	$(foreach cpp, $(wildcard *.cpp), echo iwyu $(cpp) && iwyu $(standard) $(cpp) 2>&1 | grep -- '- #include' || true;)

fresh: clean foo

cppcheck: foo
	cppcheck --enable=all . 1> /dev/null
