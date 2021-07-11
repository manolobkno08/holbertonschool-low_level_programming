#include <stdio.h>

/**
 * main - funcion main
 * @argc: numero de argumentos
 * @argv: argumentos array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
