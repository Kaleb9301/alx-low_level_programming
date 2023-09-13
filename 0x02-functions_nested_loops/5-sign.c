#include "main.h"

/**
 * print-sign - checks and print the sign
 * @n: the number to be cheked
 *
 * Return: 1, 0, 1 for negative, zero and postive respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
