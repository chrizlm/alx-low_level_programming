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
	listint *new_node;

	if (head == NULL)
		return (NULL);
	if (n == NULL)
		n = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	while (head->next != NULL)
		head = head->next;

	*head->next = new_node;

	free(new_node);

	return (*head);
}
