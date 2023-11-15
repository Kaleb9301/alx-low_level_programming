#include "main.h"

/**
 * _strlen_recursion - count the number cahrs in strins
 * @s: the string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s)
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}
