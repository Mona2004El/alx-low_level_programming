#include "main.h"
/**
 * _abs - unction that computes the absolute value of an integer
 *@n: takes an integer type input
 *
 *Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
