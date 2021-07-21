#include "function_pointers.h"

/**
 * array_iterator - funcion que obtiene cada elemento del array
 * @array: array puntero que ejecuta la funcion
 * @size: tamaño de array
 * @action: puntero de funcion
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array && action)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
