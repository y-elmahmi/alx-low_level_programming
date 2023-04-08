#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic *.c

# Create the static library liball.a from the object files
ar -rcs liball.a *.o

# Index the library for faster symbol lookup
ranlib liball.a

# Clean up the .o files
rm -f *.o
