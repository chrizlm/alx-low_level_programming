#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: pointer
 * @index: position of node
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)
	{
		head = head->next;
		count++;
	}

	return (head);
}
