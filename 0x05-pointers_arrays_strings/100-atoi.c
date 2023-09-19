#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert
 *
 * Return: A inter
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int intger = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		if  (s[i] >= 48 && s[i] <= 57)
		{
			intger = (intger * 10) + (s[i] - '0');
		}

		i++;

	}

	intger *= sign;
	return (intger);
}
