#include "holberton.h"

/**
*is_prime_number - funcion potencia
*@n: parametro
*Return: Always 0
*/

int is_prime_number(int n)
{
	int i;

	if ((n % i) == 0)
	{
		return (1);
	}

	else if (i == 1)
	{
		return (0);
	}

	else
	{
		i = i - 1;
		is_prime_number(n);
	}


}
