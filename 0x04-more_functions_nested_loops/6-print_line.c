include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *@n: the number of _ character
 *
 *
 */
void print_line(int n)
{
	int sline;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (sline = 1; sline <= n; sline++)
			_putchar('_');
		_putchar('\n');
	}
}
