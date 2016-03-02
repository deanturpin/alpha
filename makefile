.SILENT:

all: cppcheck clean foo run

# List of all directories containing a makefile
source_dirs := $(dir $(wildcard */makefile))

# List of all directories containing a run scripts
run_dirs := $(dir $(wildcard */run))

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

.PHONY: run
run:
	$(foreach dir, $(run_dirs), make -C $(dir) run;)
