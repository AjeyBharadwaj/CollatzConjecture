#
# A simple makefile for compiling a c++ project
#
SRC=./src
TARGET=./
GCC = g++
CFLAGS = -o $(TARGET)/CollatzConjecture.out
RM = rm -rf

all: main

main:
	$(GCC) $(CFLAGS) CollatzConjecture.cpp Number.cpp

clean:
	$(RM) $(TARGET)/*.out