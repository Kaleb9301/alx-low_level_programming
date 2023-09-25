#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums the diagonal
 * @a: the array
 * size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, pos, left = 0, right = 0;

	for (i = 0; i < size; i++)
	{
		pos = (i * size) + i;
		left += *( a + pos);
	}
	for(j = 0; j < size; j++)
	{
		pos = (j * size) + ( size - 1 - j);
		right += *(a + pos);

	}
	printf("%i, %i\n", left, right);
}
