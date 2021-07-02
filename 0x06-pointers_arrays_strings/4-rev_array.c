#include "holberton.h"

/**
 *reverse_array - reversar cadena de enteros
 *@a: variable puntero int
 *@n: variable tipo n
 *Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
