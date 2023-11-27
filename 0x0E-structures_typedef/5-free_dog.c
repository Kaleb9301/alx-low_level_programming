#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - free up the memory lcoation
 * @d: the pointer to the struct
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
