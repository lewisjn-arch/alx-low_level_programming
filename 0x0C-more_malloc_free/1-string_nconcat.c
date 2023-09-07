#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a string to another string
 * @dest: String to append to
 * @src: String to concatenate from
 * @n: Number of bytes from src to concatenate to dest
 *
 * Return: Pointer to the resulting string
 */
char *string_nconcat(char *dest, char *src, unsigned int n)
{
	char *result;
	unsigned int i = 0, j = 0, len_dest = 0, len_src = 0;

	while (dest && dest[len_dest])
		len_dest++;

	while (src && src[len_src])
		len_src++;

	if (n < len_src)
		result = malloc(sizeof(char) * (len_dest + n + 1));

	else
		result = malloc(sizeof(char) * (len_dest + len_src + 1));

	if (!result)
		return (NULL);

	while (i < len_dest)
	{
		result[i] = dest[i];
		i++;
	}

	while (n < len_src && i < (len_dest + n))
		result[i++] = src[j++];

	while (n >= len_src && i < (len_dest + len_src))
		result[i++] = src[j++];

	result[i] = '\0';
	return (result);
}
