#include "lists.h"
<<<<<<< HEAD
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;
=======
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: ptr to head of list_t list
 * @str: string to be added to the list_t list
 * Return: if the function fails - NULL.
 * Otherwise - the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

<<<<<<< HEAD
	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
=======
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
}
