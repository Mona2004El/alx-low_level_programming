#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: integer input
 *@size: integer input
 *Describtion: Returns  a pointer to the byte in s that matches one of
 *         the bytes in accept, or NULL if no such byte is found
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int num, s1 = 0, s2 = 0;

	for (num = 0; num < size ; num++)
	{
		s1 += a[num];
			s2 += a[size - num - 1];
			a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
