#include "main.h"
/**
 *  more_numbers -prints 10 times the numbers, from 0 to 14
 *
 * Return: return always 0
 */
void more_numbers(void)
{
	int x, y, z;

	for (z = 1; z <= 10; z++)
	{
		for (y = 0; y <= 14; y++)
		{
			x = y;
			if (y > 9)
			{
			putchar(1 + '0');
			x = y % 10;
			}
			putchar(x + '0');
		}
		putchar('\n');
	}
}
