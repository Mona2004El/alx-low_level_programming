#include <stdio.h>
#include "main.h"
/**
 *main - prints program name, followed by a new line
 *@argv: char
 *@argc: int
 *
 * Return: always 0
 */
int main(int argc, char const **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
