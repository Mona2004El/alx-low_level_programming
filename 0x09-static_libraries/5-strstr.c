#include "main.h"

/**
 *_strstr - finds the first occurrence of the substring needle in the string
 *@haystack:  character string input
 *@needle: character input
 *Describtion: Returns a pointer to the beginning of the located substring
 *		or NULL if the substring is not found.   
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int num, txt;
	char *p;

	for (num = 0; haystack[num] != '\0'; num++)
	{
	for (txt = 0; needle[txt] != '\0'; txt++)
		{
		if (needle[txt] == haystack[num])
			{
				p = &haystack[num];
				return (p);
			}
		}
	}
		return (0);

}
