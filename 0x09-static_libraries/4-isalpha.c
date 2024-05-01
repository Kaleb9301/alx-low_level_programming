#include "main.h"

/**
 *_isalpha - function to check the  character is in the alphabet
 * @c: the charater to be checked
 *
 * Return: 1 for none alpha -0 for alpha
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
