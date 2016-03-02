.SILENT:

all: cppcheck clean foo run

# List of all directories containing a makefile
source_dirs := $(dir $(wildcard */makefile))

# List of all directories containing a run script
run_dirs := $(dir $(wildcard */run))

# cppcheck from top level
cppcheck:
	cppcheck --enable=all .

# Build each project
foo:
	echo Build all
	$(foreach dir, $(source_dirs), echo $(dir); make -j -C $(dir);)
	echo Complete

# Clean each project
clean:
	echo Clean all
	$(foreach dir, $(source_dirs), make -C $(dir) clean;)

# Call run script if present
run:
	$(foreach dir, $(run_dirs), make -C $(dir) run;)
