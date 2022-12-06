#include "main.h"

/**
 * binary_to_unit - function that convert
s binary numbers to decimal
 * @b: binary input
 *
 * Return: int value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i, count = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
		count++;

	count--;
	for (i = 0; b[i] != '\0'; i++, count--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += (1 * (1 << count));
	}
	return (sum);
}
