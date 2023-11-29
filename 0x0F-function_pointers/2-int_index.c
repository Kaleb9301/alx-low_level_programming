#include "function_pointers.h"
#include <stdbool.h>

/**
 * int_index - return the index of the of the first value of compare is true
 * @array: the arra of numbers input to the function
 * @size: the size of the array
 * @cmp: the function passedi
 *
 * Return: the the index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool condition;

	condition = false;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			condition = cmp(array[i]);
			if (condition)
			{
				return (i);
			}
		}
	}
	return (-1);
}
