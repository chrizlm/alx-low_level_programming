#include "main.h"

/**
 * get_bit - function for getting bi
t at an index
 * @n: decimal input
 * @index: position
 *
 * Return: int value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	int result;

	while (n > 0)
	{
		result = n % 2;
		if (count == index)
			return (result);

		n =  n / 2;
		count++;
	}
	return (-1);
}
