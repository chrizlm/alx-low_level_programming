#include "main.h"

/**
 * _strlen - function to get length of string
 * @s: string input
 * Return: value of length
 */

int _strlen(char *s)
{
	int n = 0, count = 0;

	while (*(s + n) != 0)
	{
		count += 1;
		n += 1;
	}
	return (count);
}
