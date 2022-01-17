#include <stdio.h>
#include <stdlib.h>
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
 * binary_search - function that search index
 * value in an array of integers using the Linear search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: Always 0.
 */

int binary_search(int *array, size_t size, int value)
{

	size_t middle;
	size_t start = 0;
	size_t end = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		print_iterations(array, start, end);
		middle = (start + end) / 2;

		if (array[middle] < value)
		{
			start = middle + 1;
		}
		else if (array[middle] > value)
		{
			end = middle - 1;
		}
		else
			return (middle);
	}

	return (-1);
}
