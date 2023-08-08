#include "main.h"
/**
 * _strlen - length of string
 *@s: string
 *Return: int
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * *str_concat -  that concatenates two strings.
 *returned pointer should point to a newly allocated space in memory
 *@s1: char data type string
 *@s2: char data type string
 *
 *Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *x;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	x = malloc((size1 + size2) * sizeof(char) + 1);

	if (x == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			x[i] = s1[i];
		else
			x[i] = s2[i - size1];
	}
	x[i] = '\0';
	return (x);
}
