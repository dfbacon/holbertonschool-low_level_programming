#!/bin/bash
gccw -c *.c || ar rcs liball.a *.o
