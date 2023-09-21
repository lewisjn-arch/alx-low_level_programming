#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This statement adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in new node after iteration
 *
 * Return: address of new element, or NULL if it failed to add
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	n = malloc(sizeof(list_t));

	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->length = length;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (t->next)
		t = t->next;

	t->next = n;

	return (n);
}
