#projects := config encrypt gpx hark qonda svg topologer unicode

all: cppcheck clean foo

.PHONY: foo
foo:
	$(MAKE) -C config foo
	$(MAKE) -C encrypt foo
	$(MAKE) -C gpx foo
	$(MAKE) -C hark foo
	$(MAKE) -C qonda foo
	$(MAKE) -C svg foo
	$(MAKE) -C topologer foo
	$(MAKE) -C unicode foo

.PHONY: cppcheck 
cppcheck:
	$(MAKE) -C config cppcheck
	$(MAKE) -C encrypt cppcheck
	$(MAKE) -C gpx cppcheck
	$(MAKE) -C hark cppcheck
	$(MAKE) -C qonda cppcheck
	$(MAKE) -C svg cppcheck
	$(MAKE) -C topologer cppcheck
	$(MAKE) -C unicode cppcheck

.PHONY: clean
clean:
	$(MAKE) -C config clean
	$(MAKE) -C encrypt clean
	$(MAKE) -C gpx clean
	$(MAKE) -C hark clean
	$(MAKE) -C qonda clean
	$(MAKE) -C svg clean
	$(MAKE) -C topologer clean
	$(MAKE) -C unicode clean
