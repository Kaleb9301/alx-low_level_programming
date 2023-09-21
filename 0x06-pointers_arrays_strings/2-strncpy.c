#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy the n sting
 * @dest: the string where part of antothe to be copied into
 * @src: the string which part of the stirng copeied from
 * @n: the number of bytes to be copied
 * Return: the string that is tha othe sting copied to
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *str = dest;
	int i;

	for (i = 0; i < n && *src; i++)
	{
		*dest = *src;
		 dest++;
		 src++;
	}
	for (; i < n; i++)
	{
		*dest = '\0';
		dest++;
	}
	return (str);
}
