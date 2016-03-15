include ../rules.mak
FLAGS+=-I../pxl -I../wavl
LFLAGS=-lncurses

run2: foo
	arecord -t wav -f cd --rate 2000 -d 10 | ./foo

run: foo
	./foo < nick-kos-butterfly.wav

run3: foo
	arecord -t wav -f cd -d 10 --rate 16000 | ./foo
