#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of programme
 *
 * Description: This function prints all the letters except q and e
 *
 * Return: Always returns 0 to mean test case passes
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar (letter);
		if (letter == 'e' || letter == 'q')
			letter = letter + 1;
	
	}



}