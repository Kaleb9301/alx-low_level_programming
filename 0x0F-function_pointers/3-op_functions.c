#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: the first number in the addtion
 * @b: the second number in the addtion
 * Return: the sum of the two number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - add two numbers
 * @a: the first number in the addition
 * @b: the second number in subtraction
 * Return: the difference between two nubers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mulitpy two numbers
 * @a: the first number in multipication
 * @b: the second number in mulitpication
 * Return: the multpi;e of the number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divid the first number by the second
 * @a: the first number in division
 * @b: the second number in division
 * Return: the diviosn of the two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - the remainder
 * @a: the first number
 * @b: the second number
 * Return: the remainder of the divsion
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
