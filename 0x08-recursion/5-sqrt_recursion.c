#include "main.h"

int calculate_sqrt(int n, int i);
/**
 * calculate_sqrt - This function calculates the square root of a number
 * _sqrt_recursion - This function returns the square root of a number
 *
 * @n: integer input
 *
 * Return: square root of a number
 */

int calculate_sqrt(int n, int i)
{
    if (i * i > n)
    {
        return -1; // If i*i exceeds n, n is not a perfect square
    }
    else if (i * i == n)
    {
        return i; // If i*i is equal to n, i is the square root
    }
    else
    {
        return calculate_sqrt(n, i + 1); // Continue checking with the next i
    }
}

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; // Return -1 for negative input
    }
    else if (n == 0 || n == 1)
    {
        return n; // Square root of 0 and 1 is the number itself
    }
    else
    {
        return calculate_sqrt(n, 2); // Start checking with i=2
    }
}
