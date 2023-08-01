#include "main.h"

/**
 *_memset _ fills memory with a constant byte
 *Describtion _ The _memset() function fills the first n bytes of the memory
 * @s: string input
 * @b: character input
 * @n: unsigned integer input
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; n > 0; num++, n--)
	{
		s[num] = b;
	}
	return (s);
}
