#include "lists.h"

/**
 * free_list - function
 * @head: pointer to the list
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head->str = NULL;
		free(head);
		head = head->next;
	}
}
