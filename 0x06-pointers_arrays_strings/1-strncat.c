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
	int i, p = 0, countd = 0;

	while (dest[p] != 0)
	{
		countd++;
		p++;
	}
	if (n == 0)
		dest[countd] = '\0';
	else
	{
		for (i = 0, countd += 1 ; i < n;
i++, countd++)
			dest[countd] = src[i];
	}
}
