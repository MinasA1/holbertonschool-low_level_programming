#!/bin/bash
gcc gcc -c -Wall -Werror -pedantic -Wextra -fPIC *.c
gcc -shared *.o -o liball.so
