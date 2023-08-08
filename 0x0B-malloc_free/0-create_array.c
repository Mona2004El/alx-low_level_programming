#include "main.h"
/**
 **create_array - creates an array of chars,
 *and initializes it with a specific char.`
 *
 *@c: string
 *@size: number of bytes
 *
 *Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);

	while (size--)
		ptr[size] = c;

	return (ptr);
}
