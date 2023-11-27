#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - print the information about the dog
 * @d: pointer pointst to the memory oction dog information stroed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
