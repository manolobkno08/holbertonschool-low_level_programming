#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplica dos numeros
 * @argc: numeros de argumentos
 * @argv: argumentos array
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
