#include "main.h"

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: r = actual number of bytes read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t r;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	free(buffer);
	fclose(fd);

	return (r);
}
