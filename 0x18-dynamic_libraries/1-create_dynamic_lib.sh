#!/bin/bash
gcc -fPIC -c *.c
<<<<<<< HEAD
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
=======
gcc -shared -o liball.so *.o
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
