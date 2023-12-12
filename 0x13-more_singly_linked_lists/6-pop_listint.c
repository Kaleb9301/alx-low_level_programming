#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pos the top
 * @head: the data structure
 *
 * Return: the poped data
 */
int pop_listint(listint_t **head)
{
	listint_t *top;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	top = *head;
	*head = top->next;
	n = top->n;
	free(top);
	return (n);
}
