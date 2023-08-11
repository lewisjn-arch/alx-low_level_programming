#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the programme
 *
 * Description: This function prints the alphabet in reverse
 *
 * Return: Always returns 0 is code succeeds
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++
	}
	return (0);
}
