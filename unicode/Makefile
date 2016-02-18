include ../rules.mak

all: unicode bitmap

unicode: unicode.o
	clang++ -o $@ $<

bitmap: bitmap.o
	clang++ -o $@ $<

clean:
	rm -f unicode unicode.o
	rm -f bitmap bitmap.o
