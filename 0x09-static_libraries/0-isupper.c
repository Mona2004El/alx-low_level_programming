#include "main.h"
/**
 * _isupper - checks for uppercase character
 *@c: takes alphabet input
 *
 * Return: return 1 if the condition is true
 *          always 0
 */
int _isupper(int c)
{
        if (c >= 65 && c <= 90)
                return (1);
        else
                return (0);
}
