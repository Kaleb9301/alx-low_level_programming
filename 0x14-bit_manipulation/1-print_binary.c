#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary number
 *
 * @n: the integer to be converted and printed
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int num, i, base, pow, dev, result;
	int flag;

	base = 2;
	pow = sizeof(n) * 8 - 1;
	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	flag = 0;
	dev = num;

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
