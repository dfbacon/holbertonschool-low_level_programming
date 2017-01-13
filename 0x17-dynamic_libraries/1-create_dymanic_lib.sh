#!/bin/bash
gcc -Wall -Werror -c -fPIC *.c
gcc -shared *.o -o liball.so
