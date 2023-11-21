#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

void fetch(char **, char *);
void split_word(char **, char *, int, int, int);

/**
 * strtow - spilit the string int mulitple words
 * @str : pointer
 * Return: poineter
 */
char **strtow(char *str)
{
	int i, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);
	fetch(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * fetch - a fetch function for fetcing the splited word to the an array
 * @words: the strings array
 * @str: the string
 */
void fetch(char **words, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			split_word(words, str, start, i, j);
			j++;
			flag = 0;
		}
		i++;
	}

	if (flag == 1)
		split_word(words, str, start, i, j);
}
/**
 * split_word - split a word and insert insert it into the array
 * @words: the array of string s
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insdert the word
 */
void split_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
