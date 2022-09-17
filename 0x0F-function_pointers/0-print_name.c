<<<<<<< HEAD
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
=======
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: f
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (*f == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
}
