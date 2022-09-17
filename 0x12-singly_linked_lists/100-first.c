#include <stdio.h>

<<<<<<< HEAD
/**
 * bmain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

=======
void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before main function
 * is executed
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
