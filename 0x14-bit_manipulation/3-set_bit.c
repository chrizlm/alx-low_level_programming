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
	unsigned int count = 0;
	unsigned long int result;
	char *_binary;

	_binary = malloc(sizeof(50 * char));
	if (_binary == NULL)
		return (-1);

	while (n >= 0)
	{
		result = n % 2;

		if (count == index)
			_binary[count] = '1';
		else
		{
			if (result == 1)
				_binary[count] = '1';
			if (result == 0)
				_binary[count] = '0';
		};

		n = n / 2;
		count++;
	}

	_binary[count] = '\0';

	n = binary_to_uint(_binary);

	return (1);
}
