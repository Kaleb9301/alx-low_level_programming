#include "main.h"

/**
 * _strchr - finds the charter in stirng
 * @s: the string
 * @c: the character
 * Return: the positon where the character is found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
			break;
	}
	if (*s == '\0')

		return (NULL);
	return (s);
}
