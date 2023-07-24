#include "main.h"
/*
 *swap_int - swaps the values of two integers
 *@a: first int
 *@b: second int
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
