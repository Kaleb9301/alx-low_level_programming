#include "main.h"

/**
 * _strncat - and n numbers of character
 * @dest: the string to be concatinat into
 * @src: the string which part of it contactinate into other
 * @n: number of the bytes to concatinate into from src to dest
 * Return: the concatinated strin
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		if (*src == '\0')
			break;
		dest++;
		src++;
	}
	return (str);
}
