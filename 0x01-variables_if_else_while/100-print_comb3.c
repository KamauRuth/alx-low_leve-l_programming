#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Numbers must be separated by a comma followed by a space
 * The two digits must be different
 * such that 01 and 10 are considered the same combination of the two digits
 * 0 and 1
 * Return: Always (0)
*/

int main(void)
{	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
		if (j > i)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
