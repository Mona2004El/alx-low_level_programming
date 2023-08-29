#include "lists.h"

/**
 *pop_listint -  deletes the head node of a listint_t
 *@head: pointer to first node
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;


	if (!head || !*head)
		return (0);
		temp = (*head)->next;
		num = (*head)->n;
		free(*head);
		*head = temp;

		return (num);
}
