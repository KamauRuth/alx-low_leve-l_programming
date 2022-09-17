#include "lists.h"

/**
<<<<<<< HEAD
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
=======
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
<<<<<<< HEAD

	if (new == NULL)
=======
	if (!new)
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

<<<<<<< HEAD
	return (*head);
=======
	return (new);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
}
