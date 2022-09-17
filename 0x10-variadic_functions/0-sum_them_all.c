#include "variadic_functions.h"
<<<<<<< HEAD

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

=======
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments supllied
 * @n: number of arguments
 * @...: variadic arguments
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int sum = 0, i;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	return (sum);
}
