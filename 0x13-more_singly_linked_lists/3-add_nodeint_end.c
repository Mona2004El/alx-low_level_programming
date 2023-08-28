#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: pointer to first node
 *@n: value for new node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		node = *head;

	while (node->next)
		node = node->next;

	node->next = new_node;
	}
	return (new_node);
}
