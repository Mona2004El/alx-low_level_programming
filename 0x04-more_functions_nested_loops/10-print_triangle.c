#include "main.h"

/**
 * print_triangle - function that draws a triangle
 *@size: the size of the triangle
 *
 *Return: always 0
 */
void print_triangle(int size)
{
	int columns, rows;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (columns = 1; columns <= size; columns++)
			{
				if ((columns + rows) <= size)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
}
