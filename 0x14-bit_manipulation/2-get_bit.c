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
	unsigned int num_count;
	int result;

	num_count = (sizeof(unsigned long int) * 8);

	if (index > num_count)
		return (-1);

	result = ((n >> index) & 1);
	return (result);
}
