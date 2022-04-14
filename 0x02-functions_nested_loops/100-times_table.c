#include "holberton.h"
#include <stdio.h>

/**
 * print_times_table - prints the times table of numbers between 0-15
 * @n: number
*/

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
	{
		_putchar('0');

		for (b = 1; b <= n; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;
			if (c <= 100)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
	}
}
