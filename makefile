
.SILENT:

all: cppcheck clean foo

# cppcheck from top level
.PHONY: cppcheck
cppcheck:
	cppcheck --enable=all .

# Build each project
.PHONY: foo
foo:
	echo Build all
	$(MAKE) -C config foo
	$(MAKE) -C encrypt foo
	$(MAKE) -C gpx foo
	$(MAKE) -C hark foo
	$(MAKE) -C wavl foo
	$(MAKE) -C svg foo
	$(MAKE) -C topologer foo
	$(MAKE) -C unicode foo

# Clean each project
.PHONY: clean
clean:
	echo Clean all
	$(MAKE) -C config clean
	$(MAKE) -C encrypt clean
	$(MAKE) -C gpx clean
	$(MAKE) -C hark clean
	$(MAKE) -C wavl clean
	$(MAKE) -C svg clean
	$(MAKE) -C topologer clean
	$(MAKE) -C unicode clean
