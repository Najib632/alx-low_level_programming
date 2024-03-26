#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -std=gnu89 -c -fPIC *.c
gcc -shared -o liball.so *.o
