#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of programme
 *
 * Description: This function pringle single digit base 10 numbers
 *
 * Return: Always returns 0 to mean test case passes
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar ("%d\n", num);
		num++;
	}
	putchar ('\n');
	return (0);
}
