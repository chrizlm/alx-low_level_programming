#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * checks function for absolute values
 *
 * Return: 0
 */

int main(void)
{
	int result;

	result = _abs(-1);
	printf("%d\n", result);
	result = _abs(0);
	printf("%d\n", result);
	result = _abs(98);
	printf("%d\n", result);
	result = _abs(-98);
	printf("%d\n", result);
	return (0);
}

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
