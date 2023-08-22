#include "main.h"

/**
 * rev_string - this function reverses a string
 *
 * @s:string to be reversed
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int x;

	while (s[count] != '\0')
		count++;
	for (x = 0; x < count; i++)
	{
		count--;
		rev = s[x];
		s[x] = s[count];
		s[count] = rev;
	}
}
