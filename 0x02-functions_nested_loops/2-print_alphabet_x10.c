#include "main.h"
#include <stdio.h>


/**
 * print_alphabet_x10 - printst the the lower case alphabet 10 times
 *
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;

	}

}
