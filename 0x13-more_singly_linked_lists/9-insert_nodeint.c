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

	if (head == NULL || idx == NULL || n == NULL)
		return (NULL);


	while (count != idx)
	{
		*head = head->next;
		count++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;
	head->next = new_node;
	new_node->n = n;
	new_node->next = temp;

	free(temp);

	return (*head);
}


