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
	char *str;

	str = "Nothing here";
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[i] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return (needle);
			}
		}
	}
	return (str);
}
