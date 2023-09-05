#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array of characters
 *
 * @c: character to be initialized
 * @size: size of array
 *
 * Description: this function creates an array
 *
 * Return: NULL if size is 0 or a pointer to an array if successful
 */

char *create_array(unsigned int size, char c)
{
	char *string;

	unsigned int n;



	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)

		return (NULL);



	for (n = 0; n < size; n++)

		string[n] = c;

	return (string);
}
