#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this statement adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: address of new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int length = 0;

	while (str[length])
		length++;

	n = malloc(sizeof(list_t));

	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->length = length;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
