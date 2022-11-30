#include "lists.h"

/**
 * listint_len - function that pri
nts the length of a linked list
 * @h: head
 *
 * Return: size_t(unsigned int)
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
