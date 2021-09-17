#include "lists.h"
/**
 * add_dnodeint - add a new nodes
 * @head: double pointer
 * @n: value of nodes
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*create a new node*/
	dlistint_t *Newnode = NULL;
	/*assign space of memory to newnode */
	Newnode = malloc(sizeof(dlistint_t));
	/*validate the free allocate to the node*/
	if (Newnode == NULL)
		return (NULL);
	/*assign the new values to newnode*/
	Newnode->n = n;
	if (*head != NULL)
	{
		/*connect a newnode with the next node*/
		Newnode->next = *head;
		Newnode->prev = (*head)->prev;
		(*head)->prev = Newnode;
		*head = Newnode;
		return (*head);
	}
	Newnode->next = *head;
	Newnode->prev = NULL;
	*head = Newnode;
	return (*head);
}

