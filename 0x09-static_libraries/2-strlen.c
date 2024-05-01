#include "main.h"

/**
 * _strlen   - calculate the length of string
 * @s: the string.
 * Return: the length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
