#!/bin/bash
gcc -Werror -Wall -Wextra -pedantic -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
