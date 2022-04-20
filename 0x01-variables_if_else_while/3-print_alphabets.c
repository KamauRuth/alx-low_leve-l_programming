#include <stdio.h>

/**
 * main - prints the alphabets in lowercase then uppercase
 * followed by a new line
 * Return: Always (0)
*/

int main(void)
{	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
