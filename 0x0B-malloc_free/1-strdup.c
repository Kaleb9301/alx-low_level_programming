#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _strdup - duplicate a string
 * @str: the string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (!str)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc((sizeof(char) * len) + 1);
	if (!dup)
	{
		free(dup);
		free(str);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);

}
