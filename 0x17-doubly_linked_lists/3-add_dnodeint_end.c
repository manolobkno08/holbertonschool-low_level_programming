 #include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*create a new node*/
	dlistint_t *Newnode = NULL, *current = NULL;
	/*assign space of memory to newnode */
	Newnode = malloc(sizeof(dlistint_t));
	/*validate the free allocate to the node*/
	if (Newnode == NULL)
		return (NULL);
	/*assign the new values to newnode*/
	Newnode->n = n;
	if (*head != NULL)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		Newnode->next = NULL;
		Newnode->prev = current;
		current->next = Newnode;
		return (Newnode);
	}
	Newnode->next = *head;
	Newnode->prev = NULL;
	*head = Newnode;
	return (*head);
}
