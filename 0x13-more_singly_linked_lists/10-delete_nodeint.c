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
	listint_t *temp, *temp2;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (count < (index - 1))
	{
		temp = temp->next;
		count++;
	}

	if (count < (index - 1) || temp->next == NULL)
		return (-1);

	temp2 = temp->next;
	temp->next = temp->next->next;

	free(temp2);

	return (1);
}
