#include "main.h"

/**
 *_strpbrk -  searches a string for any of a set of bytes
 *@s:  character string input
 *@accept: character input
 *Describtion: Returns  a pointer to the byte in s that matches one of
 *         the bytes in accept, or NULL if no such byte is found
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int num, txt;
	char *p;

	for (num = 0; s[num] != '\0'; num++)
	{
		for (txt = 0; accept[txt] != '\0'; txt++)
		{
			if (accept[txt] == s[num])
			{
				p = &s[num];
				return (p);
			}
		}
	}
	return (0);
}
