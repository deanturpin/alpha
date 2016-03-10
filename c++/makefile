include ../rules.mak

.PHONY: remove_main
remove_main:
	$(RM) main.cpp main.o

.PHONY: main.cpp
main.cpp:
	./create_main

run: foo
	./foo

# Create main, build foo, remove main
all: main.cpp foo remove_main

