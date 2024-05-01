#include "main.h"

/**
 * _strspn - returns the number of bytes int theintal segment of
 * s which consist only of bytes from accept
 * @s: the intial segment
 * @accept: the bytes or chars
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n;

	n = 0;
	for (i = 0; s[i] != ','; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
					n++;
				}
			}
		}
		else
			return (n);
	}
	return (n);
}
