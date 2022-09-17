<<<<<<< HEAD
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
=======
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function
 * @array: array
 * @size: size
 * @action: action
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (*action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
		else
		{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
		}
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
}
