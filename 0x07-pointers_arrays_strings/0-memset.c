#include "main.h"

/**
 * _memset - function
 * @s: character pointer
 * @b: character value
 * @n: number of input
 * Return: character pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
