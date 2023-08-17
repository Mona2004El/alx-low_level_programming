#include "3-calc.h"
/**
 *main - check the code
 *@argc: count of arguments
 *@argv: value of arguments
 *
 *Return: success at 0
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), a, b;

	if (argc != 4)
	{

		printf("error\n"), exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n"), exit(99);
	}

		op_func = get_op_func(argv[2]);

		if (op_func == NULL)
		{
			printf("error\n"), exit(99);
		}

		a = atoi(argv[1]);
		b = atoi(argv[3]);

		printf("%d\n", op_func(a, b));
		return (0);
}
