#include "main.h"
/**
 **_strdup - returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: char data type string
 *
 *Return: always 0
 */
char *_strdup(char *str)
{
	int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	char *ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		ptr[i] = str[i];
	}
	return (ptr);
}
