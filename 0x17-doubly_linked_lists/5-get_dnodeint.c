#include "lists.h"
/**
 * fdlistint_t *get_dnodeint_at_index - release memory
 *@head: pointer
 *@index: index of node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head != NULL)
	{
		while (current != NULL)
		{
			if (i == index)
				return (current);

			current = current->next;
			i++;
		}
	}
	return (NULL);
}

