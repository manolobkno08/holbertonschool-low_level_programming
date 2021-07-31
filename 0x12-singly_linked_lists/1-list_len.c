#include "list.h"

/**
* list_len - retorna el largo
* @h: const puntero
* Return: longitud de nodos
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
