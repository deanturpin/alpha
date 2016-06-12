sources = $(wildcard *.hs)
objects = $(patsubst %.hs, %.o, $(wildcard *.hs))

%.o: %.hs
	ghc --make $<

all: ${objects}

clean:
	rm -f ${objects}
