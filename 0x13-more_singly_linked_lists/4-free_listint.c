#include "lists.h"

/**
 * free_listint - frees a linked list
<<<<<<< HEAD
 * @head: head of a list.
 *
 * Return: no return.
=======
 * @head: listint_t list to be freed
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

<<<<<<< HEAD
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
=======
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	}
}
