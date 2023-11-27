#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creating new struct
 * @name: name of new dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ln, lo, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ln = 0; name[ln]; ln++)
		;
	ln++;
	dog->name = malloc(ln * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ln; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (lo = 0; owner[lo]; lo++)
		;
	lo++;
	dog->owner = malloc(lo * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < lo; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
