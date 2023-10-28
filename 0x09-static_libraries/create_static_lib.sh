#!/bin/bash
# Compile each .c file into a corresponding .o file
gcc -c *.c
# Create the static library liball.a from the compiled .o files
ar -rc liball.a *.o
# Index the static library
ranlib liball.a
# Clean up the generated .o files
rm *.o
