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
	unsigned int sum = 0, i, calc = 0, count = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
		count++;

	for (i = count; i < 0; i--)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		if (b[i] == '0')
		{
			calc = 0;
			sum += calc;
		}
		if (b[i] == '1')
		{
			calc = pow(2, i);
			sum += calc;
		}

	}
	return (sum);
}
