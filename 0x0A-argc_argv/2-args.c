#include <stdio.h>
#include "main.h"
/**
 *main - prints all arguments it receives.
 *@argv: char
 *@argc: int
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
