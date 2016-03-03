all: cppcheck clean foo

# List of all directories containing a makefile
source_dirs := $(dir $(wildcard */makefile))

# List of all directories containing a run script
run_dirs := $(dir $(wildcard */run))

# cppcheck from top level
cppcheck:
	cppcheck --enable=all .

# Build each project
foo:
	$(foreach dir, $(source_dirs), echo $(dir); make -j -C $(dir);)

# Clean each project
clean:
	$(foreach dir, $(source_dirs), make -C $(dir) clean;)

# Call run script if present
.PHONY: run
run:
	$(foreach dir, $(run_dirs), make -C $(dir) run;)
