#include "lists.h"
<<<<<<< HEAD

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
=======
#include <stdio.h>

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

<<<<<<< HEAD
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
=======
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	}
}
