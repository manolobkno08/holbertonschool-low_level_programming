#include "lists.h"

/**
 * add_node - add a new node
 * @head: double pointer
 * @str: const string
 * Return: address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	/* declare pointer type list_t */
	list_t *new_node;
	int c = 0;
	/* add dynamic memory to our pointer var */
	new_node = malloc(sizeof(list_t));

	/* return NUll if new element is empty */
	if (new_node == NULL)
		return (NULL);

	/* save the lenght of str */
	while (str[c])
	{
		c++;
	}
	/* copy the str in our new node */
	new_node->str = strdup(str);
	/* assign lenght to len->(struct) */
	new_node->len = c;
	/* point to the next_node */
	new_node->next = (*head);
	/* assign the new node as head */
	(*head) = new_node;
	/* return the current add node address as head */
	return (*head);
}
