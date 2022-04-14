#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always (0)
*/

int  main(void)
{	int n;
	int sum = 0;

	n = 1024;
	while (n >= 0)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
		n--;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
