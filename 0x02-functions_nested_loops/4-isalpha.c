#include "main.h"

/**
 *_isalpha - unction that checks for alphabetic character
 * is a letter, lowercase or uppercase
 *@c: take input from other function
 *
 * Return: 1 condition is true ,always 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
