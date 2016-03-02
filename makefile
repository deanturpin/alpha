.SILENT:

all: cppcheck clean foo

# List of all directories containing a makefile
source_dirs := $(dir $(wildcard */makefile))

# cppcheck from top level
# .PHONY: cppcheck
cppcheck:
	cppcheck --enable=all .

# Build each project
# .PHONY: foo
foo:
	echo Build all
	$(foreach dir, $(source_dirs), echo $(dir); make -j -C $(dir);)
	echo Complete

# Clean each project
# .PHONY: clean
clean:
	echo Clean all
	$(foreach dir, $(source_dirs), make -C $(dir) clean;)

# TODO - if there's a foo try and run it, otherwise look for params
.PHONY: run
run:
	pushd wavl
	./run
	popd

