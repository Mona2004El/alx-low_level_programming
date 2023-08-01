#include "main.h"

/**
 *_memcpy -  copies memory area
 *@dest:  character string input
 *@src: character input
 *@n: unsigned int
 *Describtion: function copies n bytes from
 *             memory area src to memory area dest
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}
