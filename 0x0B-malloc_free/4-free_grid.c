#include "holberton.h"

/**
 * free_grid - liberar espacio
 * @grid: putero array bidimensional
 * @height: tamaño a liberar
 * Return: liberar
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
