#include "main.h"

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Description: This function prints the alphabet in lowercase
 *
 *Return: Always returns (0) to mean test case passes
 */

int main(void)
{
	char lower;

	lower = 'a';
	while (lower < 'z')
	{
		_putchar (lower);
		lower++;
	}
	_putchar ('\n');
	return (0);
}
