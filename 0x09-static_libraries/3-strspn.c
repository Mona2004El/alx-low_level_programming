#include "main.h"

/**
 *_strspn - locates a character in a string
 *@s:  character string input
 *@accept: character input
 *Describtion: Returns the number of bytes in the initial segment of
 *             s which consist only of bytes from accept
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num, txt;

	for (num = 0; s(num) != '\0'; num++)
	{
		for (txt = 0; accept[txt] != s[num]; txt++)
		{
			if (accept[txt] == '\0')
			return (num);
		}
	}
		return (num);
}
