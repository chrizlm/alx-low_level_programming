#include "lists.h"

/**
 * add_node_end - function to add node
 * at the end of the linked list
 * @head: pointer to the list
 * @str: string input
 * Return: the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
