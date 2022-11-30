#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: pointer to a pointer
 * @index: position of the node
 *
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	if (head == NULL || index == NULL)
		return (-1);

	while (count != index)
	{
		*head = head->next;
		count++;
	}

	temp = *head;
	free(temp);
	*head = head->next;

	return (1);
}
