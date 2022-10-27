#include "main.h"

/**
 * _strncpy - function
 * copies string to another
 * @dest: destination
 * @src: source
 * @n: int value
 * Return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
}
