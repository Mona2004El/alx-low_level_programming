#include "main.h"
/**
 * print_most_numbers - Do not print 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		putchar(c + 48);
	}
	putchar('\n');
}
