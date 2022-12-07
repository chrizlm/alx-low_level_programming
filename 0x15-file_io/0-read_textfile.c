#include "main.h"

/**
 * read_textfile - function
 * @filename: string
 * @letters: size_t
 *
 * Return: ssize
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	num_read = read(fd, buff, letter);
	if (num_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	return (num_read);
}
