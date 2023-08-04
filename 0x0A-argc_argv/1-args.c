#include <stdio.h>
#include "main.h"
/**
 *main -  prints the number of arguments passed into it.
 *@argv: char
 *@argc: int
 *
 * Return: always 0
 */
int main(int argc, char const **argv)
{
	(void) argc;
	printf("%d\n", argc - 1);
	return (0);
}
