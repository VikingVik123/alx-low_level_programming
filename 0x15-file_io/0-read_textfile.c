#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o;
	ssize_t w;
	ssize_t t;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buffer);
	close(o);
	return (w);
}
