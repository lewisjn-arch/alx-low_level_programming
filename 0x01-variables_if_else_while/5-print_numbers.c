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

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar ('\n');
	return (0);
}
