#include "lists.h"

/**
 * print_listint - function th
at prints elements of a linkedlist
 * @h: head
 *
 * Return: size_t(unsigned int)
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%lu", h->n);
		h = h->next;
	}

	return (count);
}
