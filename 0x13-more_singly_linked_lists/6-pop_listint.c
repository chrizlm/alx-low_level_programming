#include "lists.h"

/**
 * pop_listint - function that pops the top e
lement in a linked list
 * @head: pointer to a pointer
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	free(temp);
	head = head->next;

	return (data);
}
