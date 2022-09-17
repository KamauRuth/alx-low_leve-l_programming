<<<<<<< HEAD
#ifndef _MAIN_
#define _MAIN_

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
=======
#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
<<<<<<< HEAD
int get_endianness(void);

#endif

=======
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
