#include "main.h"
/**
 *free_grid -  function that frees a 2 dimensional grid previously
 *         created by your alloc_grid function.
 *@grid: int
 *@height: int
 *
 *Return: always 0
 */
void free_grid(int **grid, int height)
{
	int size;

	for (size = 0; size < height; size++)
		;
	free(grid[size]);
	free(grid);
}
