#include "main.h"
#include <stdio.h>

/**
 * _abs - function
 * gives the absolute value
 * @num: number
 *
 * Return: 0
 */

int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
