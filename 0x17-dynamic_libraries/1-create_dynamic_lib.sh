#!/bin/bash
gcc gcc -c -Wall -Werror -pedantic -Wextra -fpic *.c
gcc -shared *.o -o liball.so
