#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lower case
 * with a new line
 * Return: Always (0)
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
