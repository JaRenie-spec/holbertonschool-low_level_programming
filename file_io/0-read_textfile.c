#include "main.h"

/**
 * read_textfile - function that read and print a text file
 * @filename: pointer to a char
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	close(fd);
	free(buffer);

	return (w);
}
