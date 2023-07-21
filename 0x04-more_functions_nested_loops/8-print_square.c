#include "main.h"

/**
 * print_square - function that draws a square
 *@size: the size of the square
 *
 *Return: always 0
 */
void print_square(int size)
{
	int column, row;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		putchar('#');
		putchar('\n');
	}
}
