#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - create array with range
 * @min: the minimum of the range
 * @max: the max of the range
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((sizeof(int)) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i < max + 1; i++)
		ptr[i - min] = i;
	return (ptr);
}
