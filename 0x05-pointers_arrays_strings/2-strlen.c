#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: string
 *
 *Return: always 0
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}
