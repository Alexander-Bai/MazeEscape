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
SYSTEM_IN_DYNAMIC_LIB = prompttest.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  ma998.o ma998d.o tr992.o tr992d.o tr991.o tr991d.o ba987.o ba987d.o \
	pl985.o pl985d.o ro988.o ro988d.o ma986.o ma986d.o po990.o po990d.o \
	no989.o no989d.o da1009.o da1009d.o li1011.o li1011d.o da996.o \
	da996d.o ti995.o ti995d.o da1006.o da1006d.o da994.o da994d.o \
	da1004.o da1004d.o ti1002.o ti1002d.o ab997.o ab997d.o da1007.o \
	da1007d.o ge1012.o ge1012d.o du993.o du993d.o da1008.o da1008d.o \
	da1000.o da1000d.o fi1005.o fi1005d.o da999.o da999d.o da1003.o \
	da1003d.o ti1001.o ti1001d.o in1010.o in1010d.o 

all::  Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
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

