#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - duplicate a string
 * @str: the string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (!str)
	{
		return (NULL);
	}
	dup = malloc(sizeof(str));
	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);

}
