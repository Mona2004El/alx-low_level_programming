#include "3-calc.h"
/**
 * op_add - operation of sum
 *@a: 1st int
 *@b: 2nd int
 *
 *Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - operation of substract
 *@a: 1st int
 *@b: 2nd int
 *Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - operation of multibicate
 *@a: 1st int
 *@b: 2nd int
 *Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - operation of division
 *@a: 1st int
 *@b: 2nd int
 *Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - operation of mode
 *@a: 1st int
 *@b: 2nd int
 *Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

