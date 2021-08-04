#include "lists.h"

/**
 * sum_listint - returns the sum of n
 * @head: pointer to the first node
 * Return: sum of values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
