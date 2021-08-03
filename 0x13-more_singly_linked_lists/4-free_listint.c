#include "lists.h"

/**
 * free_listint - release memory
 * @head: list of int
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
