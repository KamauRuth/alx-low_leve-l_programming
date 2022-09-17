#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes;
=======
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

<<<<<<< HEAD
	nbytes = atoi(argv[1]);

	if (nbytes < 0)
=======
	bytes = atoi(argv[1]);

	if (bytes < 0)
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	{
		printf("Error\n");
		exit(2);
	}

<<<<<<< HEAD
	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
=======
	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	return (0);
}
