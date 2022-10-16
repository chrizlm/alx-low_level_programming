#include <stdio.h>

/**
 * main - Entry point
 * reverse order
 * Return: Always 0 (Success)
 */

int main(void)
{
	char reverse_ltr;

	for (reverse_ltr = 'z' ; reverse_ltr >= 'a' ; reverse_ltr--)
		putchar(reverse_ltr);
	putchar('\n');

	return (0);
}
