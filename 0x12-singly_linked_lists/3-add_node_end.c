#include "lists.h"
/**
* add_node_end - add a new node on the end
* @head: double pointer
* @str: const string
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	/* declare pointer type list_t */
	list_t *new_node;
	list_t *current = *head;
	int c = 0;
	/* add dynamic memory to our pointer var */
	new_node = malloc(sizeof(list_t));
	/* return NUll if dont assign memory */
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
	/* point to NULL */
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
