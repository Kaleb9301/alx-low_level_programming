#include "lists.h"

/**
 * listint_len - counts the number of int in the linked list
 *
 * @h: the list
 *
 * Return: the number of elemets
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
