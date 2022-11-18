#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function
 * @separator: string separator
 * @n: number of elements
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator == NULL)
			continue;
		if (i != n)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
