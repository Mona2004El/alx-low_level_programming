#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 *@width: int
 *@height: int
 *
 *Return: always 0
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	arr = malloc(sizeof(*arr) * height);

	if (arr == 0 || height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(**arr) * width);
			if (arr[i] == 0)
			{
				while (i--)
					free(arr[i]);
				free(arr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
	}
	return (arr);
}
