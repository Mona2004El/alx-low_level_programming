#include <stdio.h>
#include "main.h"
/**
 *_atoi - converts a string to an integer
 *@s: string
 *
 * Return: always 0
 */
int _atoi(char *s)
/**
 *main - multiplies two number
 *@argv: char
 *@argc: int
 *
 * Return: success 0, error 1
 */
int main(int argc, char **argv)
{
	{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
