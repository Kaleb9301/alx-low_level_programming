#include "main.h"

/**
 * _strcpy - copyt string from one memory space to another
 * @dest: the destination to be copied to
 * @src: the source to be copied from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
