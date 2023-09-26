#include "lists.h"

/**
 * listint_len - This statement returns the number of elements in a linked list
 * @h: This is the  linked list of type listint_t to traverse
 *
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
