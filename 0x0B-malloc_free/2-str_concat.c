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
	int i, len;

	len = 0;

	str = malloc(sizeof(s1) + sizeof(s2) - 4);
	if (str == NULL)
	{
		return(NULL);
	}
	if(s1 != NULL)
	{
		while ( s1[len] != '\0')
		{
			str[len] = s1[len];
			len++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i] != '\0')
		{
			str[len + i] = s2[i];
			i++;
		}
	}
	str[len + i + 1] = '\0';
	return (str);
}
