#include "main.h"

/**
 * set_bit - function that sets a bit i
n a binary
 * @n: pointer to number
 * @index: position
 *
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_count;
	unsigned long int result = 1;

	num_count = (sizeof(unsigned long int) * 8);
	if (num_count < index))
		return (-1);

	result <<= index;
	*n = (*n | result);

	return (1);
}
