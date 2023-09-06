#include <stdio.h>
#include "main.h"

/**
 * main - This function prints the name of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 Success in the test case
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
