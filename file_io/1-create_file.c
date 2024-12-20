#include "main.h"

/**
 * create_file - function that creates a files
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success or -1 on failure.
 */


int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
