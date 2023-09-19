#include "main.h"

/**
 * puts_half - prints the half of the string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int n, length_of_the_string = 0, i;

	while (str[length_of_the_string] != '\0')
		length_of_the_string++;
	if (length_of_the_string % 2 != 0)
		n = (length_of_the_string - 1) / 2;
	else
		n = (length_of_the_string / 2);
		n++;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
