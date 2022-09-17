#include "lists.h"
<<<<<<< HEAD

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
=======
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: a pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
	}
}
