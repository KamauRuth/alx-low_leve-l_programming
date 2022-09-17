#include "lists.h"
<<<<<<< HEAD

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
=======
#include <stdio.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
<<<<<<< HEAD
	dlistint_t *h;
=======
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
<<<<<<< HEAD
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

=======
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	*head = new;

	return (new);
}
