#include "main.h"

/**
 * _islower - checks weather the character is lower case letter
 * @c: The character to be cheked wheter it is lower case letter
 *
 * Return: 1 for non-lower 0 for lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
