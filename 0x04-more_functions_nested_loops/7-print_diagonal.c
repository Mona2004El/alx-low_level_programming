include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal
 *@n: the number of /character
 *
 *
 */
void print_diagonal(int n)
{
	int postion, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postion = 1; postion <= n; postion++
		{
			for (space = 1; space <= postion; space++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
