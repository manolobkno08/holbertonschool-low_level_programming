#include "holberton.h"

/**
*factorial - funcion factorial
*@n: parametro puntero char
*Return: Always 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
