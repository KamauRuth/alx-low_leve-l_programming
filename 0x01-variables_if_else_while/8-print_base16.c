#include <stdio.h>

/**
 * main - prints the hex numbers using function putcahr() only.
 * Return: Always (0)
*/

int main(void)
{
	int n;
	char i;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
