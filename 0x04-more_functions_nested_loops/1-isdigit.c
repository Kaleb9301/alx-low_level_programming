#include "main.h"
/**
 * _isdigit - checke wheater the charter is number or not
 * @c: the character to be checked
 * Return: 1 if it is number 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 45 && c <= 54)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

