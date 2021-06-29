#include "holberton.h"

/**
 *swap_int - funcion que intercambia valores de dos enteros
 *@a: variable puntero entero
 *@b: variable puntero entero
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
