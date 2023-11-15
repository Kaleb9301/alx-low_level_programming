#include "main.h"
#include <stdio.h>
/**
 * check - the number is prime or not
 * @divisor: the number
 * @num: the base
 * Return: number of divisor
 */
int check(int divisor, int num)
{
	if (num <= 1)
	{
		return (0);
	}
	else if (divisor != 1 && divisor < num && (num % divisor == 0))
	{
		return (0);
	}
	else if (divisor >= num)
	{
		return (1);
	}
	divisor++;
	num = check(divisor, num);
	return (num);
}

/**
 * is_prime_number - check the number is prime or not
 * @n: the number
 * Return: 1 if the number is prime 0 otherwise
 */
int is_prime_number(int n)
{
	n = check(1, n);
	return (n);
}
