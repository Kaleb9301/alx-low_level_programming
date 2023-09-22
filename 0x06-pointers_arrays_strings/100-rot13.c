#include "main.h"

/**
 * rot13 - Encode and decode the string
 * @s: the setring to be ciphered or dciphered
 * Return: the ciphered text
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (s[i] < 'n' && s[i] >= 'a')
		{
			s[i] += 'n' - 'a';
		}
		else if (s[i] >= 'n' && s[i] < 'z')
		{
			s[i] -= 'n' - 'a';
		}
		else if (s[i] < 'N' && s[i] >= 'A')
		{
			s[i] += 'N' - 'A';
		}
		else if (s[i] >= 'N' && s[i] <= 'Z')
		{
			s[i] -= 'N' - 'A';
		}

		i++;
	}
	return (s);
}
