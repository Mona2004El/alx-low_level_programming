#include "main.h"
/**
 *print_rev - prints a string, in reverse
 *@s: string
 *
 *Return: always 0
 */
void print_rev(char *s)
{
	int v = 0;

	while (s[v])
		v++;
	while (v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
