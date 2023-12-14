#include "main.h"

/**
 * set_bit - the value of bit to 1 at a give index
 * @index: starting from 0 of the bit you want to set
 * @n: pointer number of i
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
