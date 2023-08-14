#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the programme
 *
 * Description: This function prints all base 16 numbers m lowercase
 *
 * Return: Always returns 0 to mean the test case passes
 */

int main(void)
{
	int m;
	char c;

	m = 0;
	c = 'a';
	while (m < 10)
	{
		putchar (m + '0');
		m++;
	}
	while (c <= 'f')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
