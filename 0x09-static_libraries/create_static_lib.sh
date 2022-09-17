#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
=======
gcc -c *.c
ar rc liball.a *.c
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
ranlib liball.a

