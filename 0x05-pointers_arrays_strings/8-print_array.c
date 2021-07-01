#include "holberton.h"

/**
 *print_array - imrpime elementos enteros del array
 *@a: variable puntero char
 *@n: variable que contiene n
 *Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}

	printf("\n");
}
