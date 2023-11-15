#include "main.h"

/**
 *check - the sqrt
 * @n: the potential root
 * @orignal: the number
 * Return: n or -1
 */
int check(int n, int orignal)
{
	if (n * n == orignal)
		return (n);
	if (n * n > orignal)
		return (-1);
	return (check(n + 1, orignal));
}

/**
 * _sqrt_recursion - the sqrt
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
