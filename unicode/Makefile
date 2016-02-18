include ../rules.mak

all: unicode svg

unicode: unicode.o
	$(CC) -o $@ $<

svg: svg.o
	$(CC) -o $@ $<

clean:
	$(RM) unicode unicode.o
	$(RM) svg svg.o bitmap.o
