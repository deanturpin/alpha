include ../rules.mak
FLAGS+=-I../pxl -I../wavl
LFLAGS=-lncurses

run: foo
	arecord -t wav -f cd | ./foo
