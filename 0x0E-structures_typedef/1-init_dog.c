#include "dog.h"

/**
 * init_dog - initialize variables in the dogi
 * @d: point to the the meomry location data about the dog is puted
 * @name: name of the dog
 * @age: age of the dog
 * @owner: ownere of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
