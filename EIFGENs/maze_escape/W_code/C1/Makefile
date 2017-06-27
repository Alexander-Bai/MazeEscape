INCLUDE_PATH = 
SHELL = /bin/sh
CC = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/mingw/bin/gcc"
CPP = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
LDSHAREDFLAGS =  
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/studio/spec/win64/lib/mingw/mtwkbench.a"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/studio/config/win64/templates
LIBS = 
MAKE = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/msys/1.0/bin/make.exe"
AR = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/mingw/bin/ar"
LD = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/msys/1.0/bin/cp"
CP = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/msys/1.0/bin/cp"
RANLIB = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/mingw/bin/ranlib.exe"
RM = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/msys/1.0/bin/rd"
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/msys/1.0/bin/touch" finished
PATH := C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL/gcc/win64/mingw/libexec/gcc/mingw32/3.4.2;C:\Program Files\Eiffel Software\EiffelStudio 16.05 GPL\studio\spec\win64\bin;C:\Program Files (x86)\Skype\Phone\ 
SYSTEM_IN_DYNAMIC_LIB = maze_escape.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  co968.o co968d.o co965.o co965d.o di956.o di956d.o ob984.o ob984d.o \
	do983.o do983d.o si967.o si967d.o su966.o su966d.o si964.o si964d.o \
	co963.o co963d.o ga962.o ga962d.o ro960.o ro960d.o ba961.o ba961d.o \
	ma955.o ma955d.o in954.o in954d.o ro981.o ro981d.o ef980.o ef980d.o \
	ef978.o ef978d.o ef979.o ef979d.o ba982.o ba982d.o c_953.o c_953d.o \
	da976.o da976d.o da974.o da974d.o da977.o da977d.o ti972.o ti972d.o \
	da975.o da975d.o ti973.o ti973d.o gr959.o gr959d.o ti970.o ti970d.o \
	ti971.o ti971d.o co969.o co969d.o da958.o da958d.o da957.o da957d.o 

all::  Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

