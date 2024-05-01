#include "main.h"

/**
 * _memset - fulls the first n bytes of the meory area pointed
 * s with the constat byte b
 * @s: the string to have replacemet of character
 * @b: the charater which replace it
 * @n: the number of caharacter to be replaced
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
