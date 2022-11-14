#include "main.h"
#include <stdlib.h>
/**
 * _strchr - function that locates
 * character in a string
 * @s: pointer
 * @c: character
 * Return: character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
