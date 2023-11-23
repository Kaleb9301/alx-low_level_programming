#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocte a memory
 * @ptr: previoust allocated space pointer
 * @old_size: previous title
 * @new_size: the new allcication
 * Return: the new address (ptr)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *oldp;
	int i, n;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	oldp = ptr;
	if (new_size > old_size)
		n = old_size;
	else
		n = new_size;
	for (i = 0; i < n; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
