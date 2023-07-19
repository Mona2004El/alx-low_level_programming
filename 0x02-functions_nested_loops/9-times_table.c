#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 *
 *Example taple
 *0, 0, 0, 0, ..
 *0, 1, 2, 3, ..
 */
void times_table(void)
{
	int num, multi, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * multi;

			 /**
			* put spacee if product is asingle number
			* place the first digit if its two numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);/*git the first didit*/

			_putchar((prod % 10) + 48);/*get the second digit*/
		}
		_putchar('\n');
	}
}
