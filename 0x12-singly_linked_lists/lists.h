<<<<<<< HEAD
#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

=======
#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
<<<<<<< HEAD
 *
=======
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

<<<<<<< HEAD
=======
/* Main functions */
int _putchar(char c);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

<<<<<<< HEAD
#endif
=======
#endif /* LISTS_H */
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
