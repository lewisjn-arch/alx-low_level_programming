#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this function concatenates two strings
 *
 * @s1: first string input
 * @s2: second string input
 * @n: the parameter count
 *
 * Return: 0 if test case passes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s2[i])
		i++;

	j = 0;
	while (s2[j])
		j++;

	if (n >= j)
		l = i + j;

	else
		l = i + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k <= i)
			str[k] = s1[k];
		if (k >= i)
		{
			str[k] = s2[k];
			k++;
		}
		j++
	}
	str[j] = '\0';
	return (str);
}
