#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This statement reads text file print to STDOUT.
 * @filename: This is the text file being read
 * @letters: These are the number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t d;
	ssize_t n;
	ssize_t t;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(d, buffer, letters);
	n = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(d);
	return (n);
}
