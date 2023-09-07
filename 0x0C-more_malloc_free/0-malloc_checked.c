#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - this function allocates memory using malloc function
 *
 * @b: the size of memory to be allocated
 *
 * Description: This function allocates memory as indicated on the argument
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
