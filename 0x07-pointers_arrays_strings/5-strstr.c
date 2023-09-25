#include "main.h"

/**
 * _strstr - the check and return the result
 * @haystack: the hay stack
 * @needle: the needle stack
 * Return: return the stirng
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i] == needle[0]; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				continue;
			}
			else
				break;
		}
		if (needle[j])
		{
			continue;
		}
		else
			return (haystack + i);

	}
	return (NULL);
}
