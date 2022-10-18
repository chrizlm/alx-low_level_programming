#include "main.h"

/**
 * _islower - function
 * checks whether a letter is
 * lowercase using ascii
 * @c: ascii value of letter
 *
 * Return: 0
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
