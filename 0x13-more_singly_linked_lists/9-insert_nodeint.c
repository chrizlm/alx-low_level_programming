#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: pointer to a pointer
 * @idx: index position
 * @n: int value
 *
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);


	if (idx == 0)
	{
		new_node->next = *head;
		return (new_node);
	}

	temp = *head;

	while (count < (idx - 1))
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
			return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	new_node->n = n;

	return (new_node);
}
