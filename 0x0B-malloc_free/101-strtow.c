#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * alloc - allocate memory space fot the word
 * @str: the sring
 * @len: lenth of the string
 * @size: size of the array
 */
char **alloc(char *str, int len, int size)
{
	int i, j, width;
	char **word, before;

	word = malloc((size + 1) * sizeof(char *));
	before = ' ';

	for (i =0; i < size; i++)
	{
		while (j < len)
		{
			if (str[j] == ' ' && before != ' ')
			{
				before = ' ';
				j++;
				break;
			}
			if (str[j] != ' ')
				width++;
			before = str[j];
			j++;
		}
		word[i] =malloc((width + 1) * sizeof(char));
		if (word[i] == NULL)
		{
			return (NULL);
		}
		width = 0;
	}
	word[size] = NULL;
	return (word);
}

/**
 * strtow -spilit the string int mulitple words
 * @str : pointer
 * Reutrn: poineter
 */
char **strtow(char *str)
{
	char **word, before;
	int i, j, k, c, size,len;

	j = 0;
	k = 0;
	c = 0;
	size = 0;
	before = ' ';
	if (str == NULL)
		return(NULL);
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ')
			c = 1;
		if(str[i] != ' ' && before == ' ')
			size++;
		before = str[i];
		len++;
	}
	word = alloc(str, len, size);
	if (word == NULL || c == 0)
		return(NULL);
	before = ' ';
	for (i = 0; str[i] != '\0'; i++)
	{
		while (j < len)
		{
			if (str[i] != ' ' && before != ' ')
			{
				*word[j] = str[i];
				j++;
			}
			if (str[j] != ' ')
			{
				word[i][k] = str[j];
				k++;
			}
			before = str[j];
			j++;
		}
		word[i][k] = '\0';
		k = 0;
	}
	return (word);
}
