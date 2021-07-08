#include "holberton.h"

/**
*is_prime_number - funcion numero primo
*@a: parametro
*@b: parametro
*Return: Always 0
*/

int num_prime(int a, int b)
{
	if ((a % b == 0 && b < a) || a < 2)
		return (0);
	else if (a % b == 0 && b == a)
		return (1);
	else
		return (num_prime(a, b + 1));
}

/**
*is_prime_number - funcion numero primo
*@n: parametro
*Return: Always 0
*/

int is_prime_number(int n)
{
	return (num_prime(n, 2));
}
