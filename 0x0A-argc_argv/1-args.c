#include <stdio.h>

/**
 * main - funcion principal imprime numero de arg
 * @argc: numero de argumentos
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
