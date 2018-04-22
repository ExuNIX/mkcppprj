# Lycaeum' s General Makefile
# 2018 - ExuNIX AnarcoSoft

# Compilers
#CC=gcc 							# GNU C Compiler
CC=g++ 							# GNU C++ Compiler
#CC=clang 						# LLVM Clang C Compiler
#CC=clang++ 						# LLVM Clang C++ Compiler
# FLAGS
CFLAGS=-I -Wall 				# C FLAGS
CPPFLAGS=-std=c++14 			# C++ FLAGS
# Build Target Executable
MAIN=mkcppprj
# Header Files Directory
:w
INCLUDES=-I./includes/
# Source Files Directory
SRCDIR=-I./src/
# Libraries
#LIBS= -lmylibs
# User Libraries
LFLAGS=-I./lib/
# Source Files
SRCS=src/main.cpp src/Core.cpp src/Interface.cpp
#Define C Objects
OBJS=$(SRCS:.c=.o)

#
all: 	$(MAIN)
		@echo PROGRAM NAME has been compiled succesfully.

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

clean:
	rm *.o $()
