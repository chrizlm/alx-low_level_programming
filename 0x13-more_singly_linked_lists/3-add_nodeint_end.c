#include "lists.h"

/**
 * add_nodeint_end - function th
at adds node at the end of a linked list
 * @head: pointer to a pointer
 * @n: int value
 *
 * Return: address the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;

	}

	return (new_node);
}
