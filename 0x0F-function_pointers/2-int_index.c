#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 *  for which the cmp function does not return 0
 *@array: int array
 *@size: the number of elements in the array array
 *@cmp: a pointer to the function to be used to compare values
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
			return (i);
			i++;
		}
	return (-1);
}
