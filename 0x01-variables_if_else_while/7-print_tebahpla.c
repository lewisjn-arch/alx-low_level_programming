#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of programme
 *
 * Description: This function prints the alphabet in reverse and lowecase
 *
 * Return: Always returns 0 to mean test case passes
 */

int main(void)
{
	char lower;

	lower = 'z';
	while (lower >= 'a')
	{
		putchar (lower);
		lower--;
	}
	putchar ('\n');
	return (0);
}
