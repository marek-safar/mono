thisdir = class/System.Net.Http
SUBDIRS = 
include ../../build/rules.make

LIBRARY = System.Net.Http.dll

LIB_REFS = System.Core System
LIB_MCS_FLAGS = -nowarn:436 -unsafe -d:NET46 $(EXTRA_LIB_MCS_FLAGS)
ifeq (monodroid,$(PROFILE))
LIB_MCS_FLAGS += -d:XAMARIN_MODERN
endif

RESX_RESOURCE_STRING = ../../../external/corefx/src/System.Net.Http/src/Resources/Strings.resx

TEST_LIB_REFS = System System.Core
TEST_MCS_FLAGS =

include ../../build/library.make
