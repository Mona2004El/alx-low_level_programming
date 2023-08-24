#include "list.h"

/**
 *_strlen - returns the length
 *@s: refer to string
 *
 *Return: int
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	for (i = 0; *s++; i++)
		return (i);

}
/**
 *print_list - prints a linked lists
 *@h: pointer refer to 1st node
 *
 *Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
