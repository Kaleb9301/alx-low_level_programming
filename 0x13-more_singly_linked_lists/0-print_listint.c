#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints the value in the singly linked list
 * @h: the linked list to b printed
 *
 * Return: size_t type
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
