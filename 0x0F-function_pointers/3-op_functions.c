#include "3-calc.h"

/**
 * op_add - funcion que suma
 * @a: entero uno
 * @b: entero dos
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - funcion que resta
 * @a: entero uno
 * @b: entero dos
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funcion que multiplica
 * @a: entero uno
 * @b: entero dos
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funcion que divide
 * @a: entero uno
 * @b: entero dos
 * Return: 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - funcion que halla modulo
 * @a: entero uno
 * @b: entero dos
 * Return: 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
