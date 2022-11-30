#include "lists.h"

/**
 * free_listint2 - function to free linked list
 * @head: pointer to a pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = *head;
		free(temp);
		*head = head->next;
	}

	free(*head);
	head = NULL;
}
