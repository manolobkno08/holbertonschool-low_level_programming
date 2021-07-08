#include "holberton.h"

/**
*_pow_recursion - funcion potencia
*@x: parametro puntero char
*@y: parametro puntero char
*Return: Always 0
*/

int _pow_recursion(int x, int y)
{

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	else if (y < 0)
	{
		return (-1);
	}

	else
	{
		return (1);
	}


}
