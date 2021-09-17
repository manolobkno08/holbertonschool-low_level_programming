#include "lists.h"
/**
 * free_dlistint - release memory
 * @head: pointer
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *tmp = NULL; 

	while (current != NULL)
	{
		tmp = current->next;
		free (current);
		current = tmp;
	}
}
