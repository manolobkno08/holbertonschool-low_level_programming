#include "holberton.h"

/**
 * alloc_grid - imprimir una grilla
 * @width: primer tamaño array
 * @height: segundo tamaño array
 * Return: puntero
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(height * sizeof(int *));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		c[i] = malloc(width * sizeof(int));

		if (c[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(c[k]);
			}
			free(c);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			c[i][j] = 0;
		}
	}

	return (c);
}
