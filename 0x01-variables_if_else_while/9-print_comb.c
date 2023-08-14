#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of programme
 *
 * Description: This function prints single digit number combinations
 *
 * Return: Always returns 0 to mean the test case passes
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar (num + '0');
			if (num < 9)
			{
				putchar (',');
				putchar (' ');
			}
		num++;
	}
	putchar ('\n');
	return (0);
}
