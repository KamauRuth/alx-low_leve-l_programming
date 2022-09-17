<<<<<<< HEAD
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be used
 * to compare values.
 *
 * Return: index of the first eement for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
=======
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer.
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: nothing.
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

<<<<<<< HEAD
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

=======
	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	return (-1);
}
