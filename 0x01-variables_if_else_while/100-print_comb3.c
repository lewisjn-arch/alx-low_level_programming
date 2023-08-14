#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of programme
 *
 * Description: This function prints double digit numbers
 *
 * Return: Always returns 0 to mean the test case passes
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 100)
	{
		putchar (num + '0');
		putchar (',');
		putchar (' ');
			if (num < 10)
				putchar (num + '00');
		num++;
	}
	putchar ('\n');
	return (0);
}
