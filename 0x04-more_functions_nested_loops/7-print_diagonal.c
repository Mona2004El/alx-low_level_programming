#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal
 *@n: the number of /character
 *
 *
 */
void print_diagonal(int n)
{
	int pos, spac;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (spac = 1; spac <= pos; spac++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
}
