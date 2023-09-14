#include "main.h"

/**
 * _abs - calulate the absulte value of the input'
 * @n: the neber which the calucation takes up on
 *
 * Return: the n or n * (-1)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
