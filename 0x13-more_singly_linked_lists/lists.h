#ifndef HOL_LISTS_H
#define HOL_LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - struct
 * @n: var int into the struct
 * @next: pointer next node
 * Return: Always 0.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif
