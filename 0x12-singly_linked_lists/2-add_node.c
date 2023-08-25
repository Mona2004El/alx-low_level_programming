#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: pointer to head node
 *@str: string
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
	len++;

		if (!new_head)
		{
			return (NULL);
		}
		new_head->len = len;
		new_head->str = strdup(str);
		new_head->next = *head;
		*head = new_head;

		return (*head);
}
