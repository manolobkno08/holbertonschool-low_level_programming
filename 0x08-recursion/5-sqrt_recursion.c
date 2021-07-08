#include "holberton.h"

/**
*sqrt_check - funcion raiz
*@g: parametro
*@c: parametro
*Return: Always 0
*/

int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
*_sqrt_recursion - funcion raiz
*@n: parametro
*Return: Always 0
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
