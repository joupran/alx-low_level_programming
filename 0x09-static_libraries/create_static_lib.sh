#!bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c 
ar crs liball.a *.o
