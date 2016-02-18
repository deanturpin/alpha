include ../rules.mak

all: unicode bitmap

unicode: unicode.o
	$(CC) -o $@ $<

bitmap: bitmap.o
	$(CC) -o $@ $<

clean:
	rm unicode unicode.o
	rm bitmap bitmap.o
