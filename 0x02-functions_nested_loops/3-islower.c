#include "main.h"

/**
 * _islower - function check if the caracter is lower case
 *
 *@c: checks input of function
 *
 *Return: return 1 if condition is true
 *        always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
