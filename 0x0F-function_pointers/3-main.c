#include "3-calc.h"
<<<<<<< HEAD

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);
=======
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

<<<<<<< HEAD
	if (argv[2][1])
=======
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	{
		printf("Error\n");
		exit(99);
	}

<<<<<<< HEAD
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
=======
	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	return (0);
}
