#include "lists.h"

/**
 * print_dlistint - print all list elements
 * @h: pointer to head
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int length;

	for (length = 0; h != NULL; length++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (length);
}

