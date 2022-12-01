#include "lists.h"

/**
 * free_listint - function to free a linked list
 * @head: pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
