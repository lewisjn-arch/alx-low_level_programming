#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory using malloc function
 *
 * @b: the size of memory to be allocated
 *
 * Return: a pointer to the memory on heap memory
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
