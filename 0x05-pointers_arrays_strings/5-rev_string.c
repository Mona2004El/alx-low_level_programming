#include "main.h"
/**
 * rev_string - reverses a string
 *@s: string
 *
 *Return: always 0
 */
void rev_string(char *s)
{
	int x, y;
	char num;

	for (x = 0; s[x] != '\0'; ++x)
		;
	for (y = 0; y < x / 2; y++)
	{
		num = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = num;
	}

}
