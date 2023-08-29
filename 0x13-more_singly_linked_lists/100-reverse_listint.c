#include "lists.h"

/**
 *reverse_listint - unction that reverses a listint_t linked list
 *@head: pointer to first node
 *
 * Return: adress of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!*head || !head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);

}
