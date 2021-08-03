#include "lists.h"
/**
* add_nodeint_end - add new node in the final
* @head: pointer to head of nodes
* @n: const int
* Return: new final node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declare new node */
	listint_t *new_node;
	/* declare a new listvar for assign an address of head*/
	listint_t *current = *head;
	/* validate if head and n is empty */
	if (head == NULL || n == 0)
		return (NULL);
	/* validate malloc */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* assign the value of n to n in the struct */
	new_node->n = n;
	/* assign the new node to the last position */
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* pointer that goes through the nodes */
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
