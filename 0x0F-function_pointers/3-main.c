#include "3-calc.h"

/**
 * main - main funcion
 * @argc: numero de argumentos
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*val)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	val = get_op_func(argv[2]);

	if (val == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", val(a, b));

	return (0);
}
