#include "lists.h"

/**
 * string_count - function
 * @str: string
 * Return: number of char
 */

unsigned int string_count(const char *str)
{
	unsigned int count = 0;

	while (str[count] != '\0')
		count++;

	return (count);
}
