#include "main.h"
/**
 * _isupper - check wheater the character is upper letter or lower case letter
 * @c: the characte to be cheked
 * Return: 1 for upper case and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
