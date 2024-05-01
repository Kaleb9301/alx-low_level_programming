#include "main.h"
/**
 * _strcat - this funcation concatinate two function
 * @dest: the string to be another string to be add
 * @src: the string to be added on othe string
 * Return: return the conacatinate string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s);
}
