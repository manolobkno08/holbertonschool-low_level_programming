#include "function_pointers.h"

/**
 * int_index - Funcion que busca y compara un entero
 * @array: array de enteros
 * @size: tamaño de aray
 * @cmp: funcion puntero
 * Return: elemento que coincida con `cmp`, o -1 si no lo encuentra
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
