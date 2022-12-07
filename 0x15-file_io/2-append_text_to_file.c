#include "main.h"

/**
 * append_text_to_file - function
 * @filename: string
 * @text_content: string
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0, content_write;

	while (text_content[count] != '\0')
		count++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_write = write(fd, filename, count);
		if (content_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
