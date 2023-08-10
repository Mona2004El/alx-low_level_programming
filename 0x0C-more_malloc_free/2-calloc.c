#include "main.h"
/**
 * *_memset - fills memory with constant byte
 *@n: max bytes
 *@s: pointer
 *@b: constant
 *
 *Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	*s++ = b;

	return (ptr);
}

/**
 * *_calloc - allocates memory for an array of nmemb elements
 *of size bytes each and returns a pointer to the allocated memory.
 *@nmemb: integer
 *@size: integer
 *
 *Return: always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
