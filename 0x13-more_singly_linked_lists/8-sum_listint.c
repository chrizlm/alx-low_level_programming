#include "lists.h"

/**
 * sum_listint - function th
at sums the values in each node of a linked list
 * @head: pointer
 *
 * Return: sum value
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
