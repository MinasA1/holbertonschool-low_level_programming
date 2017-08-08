#!/bin/bash
gcc gcc -c -Wall -Werror -fpic *.c
gcc -shared -o liball.so *.o
