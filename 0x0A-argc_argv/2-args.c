#include <stdio.h>
<<<<<<< HEAD
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
=======
#include <stdlib.h>
/**
 * main - prints all arguuments passed to it, followed by a new line.
 * @argc: counter
 * @argv: vector
 * Return: Always (0)
*/

>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
<<<<<<< HEAD
		printf("%s\n", argv[i]);
=======
	{
		printf("%s\n", argv[i]);
	}
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	return (0);
}
