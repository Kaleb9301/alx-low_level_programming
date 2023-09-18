#include "main.h"

/**
 * swap_int  - swap the value of the variables using pointers
 * @a: the fist number
 * @b: the second number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
