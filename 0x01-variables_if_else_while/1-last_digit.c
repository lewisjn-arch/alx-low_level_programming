#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: The function outputs the last digit and a string of status
 *
 * Return: Always 0 (Means the test case is a Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (x < 6 && x != 0)
		printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, x);
	else if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else
		printf("Last digit of %d is %d and is 0\n", n, x);
	return (0);
}
