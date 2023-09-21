#include "main.h"

/**
 * reverse_array - reverse the order of the array
 * @a: the array
 * @n: the size of array
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
