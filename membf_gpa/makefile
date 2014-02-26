########################################################################
# Macro definitions for "standard" C and C++ compilations
#
# Edit the next 5 definitions. After that, "make" will
#   build the program.
# 
#  Define special compilation flags for C++ compilation. These may change when
#  we're done testing and debugging.
CPPFLAGS=-g
#
#  Define special compilation flags for C compilation. These may change when
#  we're done testing and debugging.
CFLAGS=-g
# 
#  What is the name of the program you want to create?  (See below for notes
#     on using this makefile to generate multiple programs.)
TARGET=gpaCalc
#
#  List the object code files to be produced by compilation. Normally this 
#  list will include one ".o" file for each C++ file (with names ending in 
#  ".cpp", ".cc" or ".C"), and/or each C file (with names ending in ".c").
#  Do NOT list .h files. For example, if you are building a program from 
#  source files foo.c, foo.h, bar.cpp, baz.cc, and bam.h you would use
#      OBJS1=foo.o bar.o baz.o
OBJS=gpaCalc.o student.o gradeValue.o
# 
#  What program should be used to link this program? If the program is
#  even partly C++, use g++.  If it is entirely C, use gcc.
LINK=g++ $(CPPFLAGS)
#LINK=gcc $(CFLAGS)
# 
#  Define special linkage flags.  Usually, these are used to include
#  special libraries of code, e.g., -lm to add the library of mathematical
#  routines such as sqrt, sin, cos, etc.
LFLAGS=-lm
#
#
#
#  In most cases, you should not change anything below this line.
#
#  The following is "boilerplate" to set up the standard compilation
#  commands:
#
.SUFFIXES:
.SUFFIXES: .d .o .h .c .cc .C .cpp
.c.o: ; $(CC) $(CFLAGS) -MMD -c $*.c
.cc.o: ; $(CXX) $(CPPFLAGS) -MMD -c $*.cc 
.C.o: ; $(CXX) $(CPPFLAGS) -MMD -c $*.C
.cpp.o: ; $(CXX) $(CPPFLAGS) -MMD -c $*.cpp

CC=gcc
CXX=g++

%.d: %.c
	touch $@
%.d: %.cc
	touch $@
%.d: %.C
	touch $@
%.d: %.cpp
	touch $@

DEPENDENCIES = $(OBJS:.o=.d)

# 
# Targets:
# 
all: $(TARGET)

$(TARGET): $(OBJS)
	$(LINK) $(FLAGS) -o $(TARGET) $(OBJS) $(LFLAGS)

clean:
	-rm -f $(TARGET) $(OBJS) $(DEPENDENCIES) make.dep


make.dep: $(DEPENDENCIES)
	-cat $(DEPENDENCIES) > make.dep

include make.dep
