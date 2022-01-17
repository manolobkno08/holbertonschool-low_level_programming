#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * print_iterations - function that print values
 * @array: the array of integers
 * @start: start idx
 * @end: final idx
 *
 * Return: Always 0.
 */

int print_iterations(int *array, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);

	return (0);
}

/**
 * jump_search - function that search index
 * value in an array of integers using the Linear search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: Always 0.
 */

int jump_search(int *array, size_t size, int value)
{
	return 0;
}