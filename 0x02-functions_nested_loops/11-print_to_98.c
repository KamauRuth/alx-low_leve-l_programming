#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural integers from n to 98
 * @n: n
*/

void print_to_98(int n)
{	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
