#include "lists.h"

/**
 * free_listint2 - frees a linked list
<<<<<<< HEAD
 * @head: head of a list.
 *
 * Return: no return.
=======
 * @head: pointer to the listint_t list to be freed
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
<<<<<<< HEAD
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
=======

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
}
