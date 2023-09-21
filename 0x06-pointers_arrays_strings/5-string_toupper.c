#include "main.h"
/**
 * string_toupper - chage lower letter to upeer case
 * @s: the stiring
 * Return: string int uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
