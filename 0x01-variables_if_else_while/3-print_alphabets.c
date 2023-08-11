#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of programme
 *
 * Description: This function prints lowercase and uppercase alphabets
 *
 * Return: Always returns 0 to show code success
 */
int main(void)
{
	char upper;
	char lower;
	
	lower = 'a';
	while (lower <= 'z')
	{	
		putchar(lower);
		lower++;
		if (lower == 'z')
			upper = 'A';
			while (upper <= 'Z')
			{
				putchar(upper);
				upper++;
			}
	}
	purchar('\n';);
	return(0);
}
