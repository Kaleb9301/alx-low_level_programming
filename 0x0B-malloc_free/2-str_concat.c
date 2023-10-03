#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatinate two string
 * @s1: the first string
 * @s2: the second string
 * Return: return the concatinated
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, len1, len2;

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!str)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			str[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; i < len2; i++)
		{
			str[len1 + i] = s2[i];
		}
	}
	str[len1 + len2 + 1] = '\0';
	return (str);
}
