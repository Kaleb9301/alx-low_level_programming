#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free up the linked list
 * @head: the linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
	free(head);
}
