include ../rules.mak
FLAGS+=-I../pxl -I../wavl
LFLAGS=-lncurses

run: foo
	arecord -t wav -f cd --rate 2000 -d 10 | ./foo

run1: foo
	./foo < nick-kos-butterfly.wav
