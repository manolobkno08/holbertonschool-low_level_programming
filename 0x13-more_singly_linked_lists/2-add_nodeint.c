#include "lists.h"
/**
* add_nodeint - add new node
* @head: pointer to head of nodes
* @n: const int
* Return: new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create a new node in the list */
	listint_t *new_node;
	/* validate if head and const is NULL */
	if (head == NULL || n == 0)
		return (NULL);
	/* validate malloc position */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* assign the value to my new node in the structure = n */
	new_node->n = n;
	/* the next node will be the head */
	new_node->next = (*head);
	/* assign the new node as head */
	(*head) = new_node;
	/* return address of the new node */
	return (*head);
}
