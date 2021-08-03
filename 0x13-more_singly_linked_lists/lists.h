#ifndef HOL_LISTS_H
#define HOL_LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
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

#endif
