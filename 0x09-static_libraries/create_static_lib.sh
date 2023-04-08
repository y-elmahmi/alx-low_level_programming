#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic *.c
ar -rcs liball.a *.o
ranlib liball.a

