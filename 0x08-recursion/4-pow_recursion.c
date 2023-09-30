#include "main.h"

/**
 * _pow_recursion - calculate the power of a number by number
 * @x: the number
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	else if (y < 1)
	{
		return (-1);
	}
	else
	{
		x *= _pow_recursion(x, y - 1);
		return (x);

	}
}
