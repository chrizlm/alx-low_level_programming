#include "main.h"

/**
 * _memcpy - function
 * copies memory area
 * @dest: destination
 * @src: source
 * @n: number of elements
 * Return: character pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
