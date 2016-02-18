include ../rules.mak

all: unicode bitmap svg

unicode: unicode.o
	$(CC) -o $@ $<

bitmap: bitmap.o
	$(CC) -o $@ $<

svg: svg.o
	$(CC) -o $@ $<

clean:
	$(RM) unicode unicode.o
	$(RM) bitmap bitmap.o
	$(RM) svg svg.o
