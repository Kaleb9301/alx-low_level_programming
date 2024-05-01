#include "main.h"

/**
 * _memcpy - copeis stirng to string
 * @dest: the string will be puted
 * @src: the string to be copied into
 * @n: number of string will be comied
 * Return: the final result string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *string = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (string);
}
