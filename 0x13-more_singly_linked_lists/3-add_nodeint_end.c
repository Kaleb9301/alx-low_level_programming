#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add  a new nod at the end of the list
 * @head: the start of the linked list
 * @n: the new int to be added to the list
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);
}
