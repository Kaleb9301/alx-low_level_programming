#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - reserve the meomry space passed by the argument
 * @b: the size to be reserved
 * Return: the pointer which point to the reserved space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
