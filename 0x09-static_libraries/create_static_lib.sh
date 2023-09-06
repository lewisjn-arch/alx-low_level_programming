#!/bin/bash
gcc -wall -pedantic -Werror -WExrea -c *.c
ar -rc liball.a *.o
ranlib liball.a
