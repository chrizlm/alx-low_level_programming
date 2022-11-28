#include "lists.h"

/**
 * add_node - function that
 * adds a node to a linked list at the beginning
 * @head: head pointer
 * @str: string element
 * Return: structure list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = count;
	temp->next = *head;

	*head = temp;

	return (*head);
}
