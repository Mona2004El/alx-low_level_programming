#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *@str: refer to string
 *
 *Return: always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
