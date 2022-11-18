#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function
 * @separator: string separator
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *word;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		word = va_arg(ap, char *);
		if (word == NULL)
			printf("(nil)");
		printf("%s", word);

		if (separator == NULL)
			continue;
		if (i != n)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
