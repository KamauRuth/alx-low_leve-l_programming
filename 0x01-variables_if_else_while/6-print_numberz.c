#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all numbers of base ten with single digits using function
 * putchar() only
 * Return: Always (0)
*/

int main(void)
{	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
