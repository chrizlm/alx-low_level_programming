#include "main.h"

/**
 * _strcat - function
 * concatinates strings
 * @dest: destination
 * @src: source string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, n = 0, t = 0, countd = 0, counts = 0;

	while (dest[n] != 0)
	{
		countd++;
		n++;
	}
	while (src[t] != 0)
	{
		counts++;
		t++;
	}
	for (i = 0, countd += 1;
i <= counts ; i++)
		dest[countd] = src[i];
	dest[countd] = '\0';
}
