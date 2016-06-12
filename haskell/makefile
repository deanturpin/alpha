sources = $(wildcard *.hs)
objects = $(patsubst %.hs, %.o, $(wildcard *.hs))

%.o: %.hs
	ghc $<

all: ${objects}

clean:
	rm -f ${objects}
