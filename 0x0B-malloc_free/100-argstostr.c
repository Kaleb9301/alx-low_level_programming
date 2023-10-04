#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * argstostr - concatinate the all argumet of the program
 * @ac: number of argumets
 * @av: the arguments
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, size, k;

	k = 0;
	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	s = malloc((sizeof(char) * size) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
