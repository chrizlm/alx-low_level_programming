#include "main.h"

/**
 * _strncat - function
 * concatinate strings
 * @dest: destination
 * @src: source
 * @n: int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, p = 0;

	while (dest[p] != '\0')
		p++;
	if (n == 0)
		src[i] = '\0';
	else
	{
		while (i < n)
		{
			dest[p] = src[i];
			p++;
			i++;
		}
		dest[p] = '\0';
	}
	return (dest);
}
