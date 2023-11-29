#include "function_pointers.h"

/**
 * array_iterator - itereate over the using specified fucntion
 * @array: the array of the data to be iteratod
 * @size: the size of the array
 * @action: the fucniton to be applied
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
