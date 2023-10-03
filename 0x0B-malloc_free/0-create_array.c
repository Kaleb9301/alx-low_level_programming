#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array -creates a dynamic array with mallock
 * @size: the size to be allocated
 * @c: the charater to be puted int the allocate memory space
 * Return: 0 if it is unable to allocate or the the size
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
