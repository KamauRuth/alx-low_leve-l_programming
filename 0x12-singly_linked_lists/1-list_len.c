#include "lists.h"
<<<<<<< HEAD
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
=======

/**
 * list_len - Finds the number of elements in
 * a linked list_t list.
 * @h: The linked list_t list
 * Return: The number of elements
 * in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
}
