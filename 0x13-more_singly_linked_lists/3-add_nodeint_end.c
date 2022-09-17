<<<<<<< HEAD

#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
=======
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
<<<<<<< HEAD
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
=======
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
		return (NULL);

	new->n = n;
	new->next = NULL;
<<<<<<< HEAD
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}

=======

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
