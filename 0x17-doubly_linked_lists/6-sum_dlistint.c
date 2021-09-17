#include "lists.h"
/**
 * sum_dlistint - adition values of nodes
 *@head: pointer
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	int i;
	int sum = 0;
	dlistint_t *current = head;

	if (current != NULL)
	{
		for (i = 0; current != NULL; i++)
		{
			sum += current->n;
			current = current->next;
		}

		return (sum);
	}
	else
	{
		return (0);
	}
}

