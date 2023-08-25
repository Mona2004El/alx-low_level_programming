#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to head node
 *@str: string
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (node->next)
		node = node->next;

	node->next = new_node;

	return (new_node);
}
