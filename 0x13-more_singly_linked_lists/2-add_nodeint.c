#include "lists.h"

/**
 * add_nodeint - function th
at adds node at beginning of linked list
 * @head: head pointer to a pointer
 * @n: int value
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (n == NULL);
		n = 0;

	new_node->n = n;
	new_node->next = *head

	*head = new_node;
	free(new_node);

	return (*head);
}