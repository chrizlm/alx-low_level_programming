#include "main.h"
#include <stdlib.h>

/**
 * name_len -function
 * @name: name input
 * Return: char
 */

int name_len(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
		;
	return (i);
}

/**
 * main - function prints file name
 * Return: int 
 */

int main(void)
{
	int len, i;
	char *name;

	len = name_len(__FILE__);
	name = malloc(len);
	if (file_name == NULL)
		return (1);

	for (i = 0; name[i] != '\0'; i++)
		_putchar('%c', name[i]);
	_putchar('\0');
	_putchar('\n');

	return (0);
}
