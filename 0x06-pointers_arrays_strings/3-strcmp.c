#include "main.h"

/**
 * _strcmp - compare to string
 * @s1: the first string
 * @s2: the second string
 * Return: the diffrence
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			return (diff);
		}
		s1++;
		s2++;
	}
	return (0);
}
