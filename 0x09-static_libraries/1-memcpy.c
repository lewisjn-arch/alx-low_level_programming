#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: Number of bytes to copy
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int i = n;

    for (; i > 0; i--)
    {
        dest[i - 1] = src[i - 1];
        n--;
    }
    return (dest);
}
