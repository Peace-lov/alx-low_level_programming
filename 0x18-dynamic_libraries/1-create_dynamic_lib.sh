#!/bin/bash

/*compile all *.c file into obj file*/
gcc -c *.c

/*create a dynamic library from the obj files*/
gcc *o -shared -o liball.so
