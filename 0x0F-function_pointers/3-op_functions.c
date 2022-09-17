<<<<<<< HEAD
#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
=======
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add  - add nbrs
 * @a:a
 * @b:b
 * Return: 0.
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
<<<<<<< HEAD
 * op_sub - subctracts two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference.
=======
 * op_sub - substract nbrs
 * @a:a
 * @b:b
 * Return: 0.
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
int op_sub(int a, int b)
{
	return (a - b);
}

<<<<<<< HEAD
/**
 * op_mul - multiplies two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: multiplication.
=======

/**
 * op_mul - multiplication
 * @a:a
 * @b:b
 * Return: 0.
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
int op_mul(int a, int b)
{
	return (a * b);
}

<<<<<<< HEAD
/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
=======

/**
 * op_div - division
 * @a: a
 * @b: b
 * Return: 0.
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - modulo
 * @a: a
 * @b: b
 * Return: 0.
 */
int op_mod(int a, int b)
{
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	return (a % b);
}
