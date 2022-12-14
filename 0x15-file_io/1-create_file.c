#include "main.h"

/**
 * create_file - function
 * @filename: string
 * @text_content: string
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count = 0, content_write;

	while (text_content[count] != '\0')
		count++;
	count--;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREATE | 0_WRONLY, 0600);
	if (fd== -1)
		return (-1);

	if (text_content != NULL)
	{
		content_write = write(fd, text_content, count);
		if (content_write == -1)
		{
			close (fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
