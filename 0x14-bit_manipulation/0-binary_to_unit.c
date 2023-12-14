#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit - convert binary to int
 *
 * @b: binary numbers in char data type
 *
 * Return: unsigne integr
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int j = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			j <<= 1;
			if (b[i] == '1')
				j += 1;
		}
	}
	return (j);
}
