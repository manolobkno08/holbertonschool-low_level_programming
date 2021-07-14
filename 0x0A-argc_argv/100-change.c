#include <stdio.h>
#include <stdlib.h>

/**
 * main - imprime el minimo numero de monedas al cambio
 * @argc: debe contar dos argumentos
 * @argv: recibe el nombre de programa y el monto de monedas
 * Return: 0 si el monto es negativo, 1 si no se obtiene monto
 */

int main(int argc, char *argv[])
{
	int n, coins = 0;

	/* validar datos de entrada */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	/* convertir string a entero y calcular monedas */
	n = atoi(argv[1]);

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
