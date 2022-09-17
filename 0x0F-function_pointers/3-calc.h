<<<<<<< HEAD
#ifndef _CALC_H_
#define _CALC_H_

#include <stdlib.h>
#include <stdio.h>
=======
#ifndef CALC_H
#define CALC_H

>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
<<<<<<< HEAD

=======
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
#endif
