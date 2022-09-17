<<<<<<< HEAD
#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
=======
#include "main.h"
#include <stdio.h>

/**
 * main - prints program's name follwed by newline
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: always (0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	return (0);
}
