#include "main.h"

/**
 * _strcmp - function
 * compares string
 * @s1: string one
 * @s2: string two
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, count = 0;

	while ((s1[n] != '\0') && (s2[n] != '\0'))
	{
		if (*(s1 + n) == *(s2 + n))
		{
			count += 0;
			n++;
		}
		else
		{
			count = (s1[n] - s2[n]);
			break;
		}
	}
	return (count);
}
