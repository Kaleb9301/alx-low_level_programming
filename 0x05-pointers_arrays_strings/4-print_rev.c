#include "main.h"

/**
 * print_rev - printst the reverse of the string 
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len;


	len = _strlen(s);
	i = len - 2;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
