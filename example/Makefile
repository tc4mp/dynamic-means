# GNU Make solution makefile autogenerated by Premake
# Type "make help" for usage help

ifndef config
  config=debug
endif
export config

PROJECTS := DynMeansExample SpecDynMeansExample KernDynMeansExample

.PHONY: all clean help $(PROJECTS)

all: $(PROJECTS)

DynMeansExample: 
	@echo "==== Building DynMeansExample ($(config)) ===="
	@${MAKE} --no-print-directory -C build -f DynMeansExample.make

SpecDynMeansExample: 
	@echo "==== Building SpecDynMeansExample ($(config)) ===="
	@${MAKE} --no-print-directory -C build -f SpecDynMeansExample.make

KernDynMeansExample: 
	@echo "==== Building KernDynMeansExample ($(config)) ===="
	@${MAKE} --no-print-directory -C build -f KernDynMeansExample.make

clean:
	@${MAKE} --no-print-directory -C build -f DynMeansExample.make clean
	@${MAKE} --no-print-directory -C build -f SpecDynMeansExample.make clean
	@${MAKE} --no-print-directory -C build -f KernDynMeansExample.make clean

help:
	@echo "Usage: make [config=name] [target]"
	@echo ""
	@echo "CONFIGURATIONS:"
	@echo "   debug"
	@echo "   release"
	@echo ""
	@echo "TARGETS:"
	@echo "   all (default)"
	@echo "   clean"
	@echo "   DynMeansExample"
	@echo "   SpecDynMeansExample"
	@echo "   KernDynMeansExample"
	@echo ""
	@echo "For more information, see http://industriousone.com/premake/quick-start"
