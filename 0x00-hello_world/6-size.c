#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the programme
 *
 * Description: This programme prints the size of data types
 *
 * Return: Always returns 0 to mean test case passes
 */

int main(void)
{
	char c;
	int num;
	long int number;
	long long int Long;
	float decimal;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(number));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(Long));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(decimal));
	return (0);
}
