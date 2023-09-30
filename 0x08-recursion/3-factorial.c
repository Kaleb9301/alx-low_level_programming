#include "main.h"

/**
 * factorial - calculate the factorieal of an number with recursion
 * @n: the number
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
