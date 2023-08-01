#include "main.h"

/**
 *print_chessboard - wite a function that prints the chessboard.
 *@a:  character string input
 *Describtion: Returns  a pointer to the byte in s that matches one of
 *         the bytes in accept, or NULL if no such byte is found
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
		int num, txt;

		for (num = 0; num < 8; num++)
		{
			for (txt = 0; txt < 8; txt++)
			{
				_putchar(a[num][txt]);
			}
			_putchar('\n');
		}
}
