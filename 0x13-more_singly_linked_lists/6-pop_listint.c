#include "lists.h"

/**
 *pop_listint - deletethe head of node
 *@head: double pointer
 *Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *del;

	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	del = *head;
	*head = del->next;
	n = del->n;
	free(del);
	return (n);
}
