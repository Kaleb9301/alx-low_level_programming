#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - this add new nod the linked list
 * @head: the linked list
 * @n: the value to be added
 *
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
