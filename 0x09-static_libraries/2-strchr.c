#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s:  character string input
 *@c: character input
 *Describtion: Returns a pointer to the first occurrence of
 *             the character c in the string s
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
		int num;

	for (num = 0; s(num) >= '\0'; num++)
	{
		if (s(num) == c)
		{
			return (s + num);
		}
	}
	return ('\0');
}
