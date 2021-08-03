#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h: pointer to int
 * Return: counter
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
