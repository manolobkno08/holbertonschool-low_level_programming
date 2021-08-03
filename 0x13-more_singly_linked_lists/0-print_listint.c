#include "lists.h"

/**
 * print_listint - print list of int
 * @h: pointer to int
 * Return: i
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
