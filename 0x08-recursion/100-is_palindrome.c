#include "main.h"
/**
 * _strlen - length of the string
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}
/**
 * pal_check - check the string is palindrome
 * @s: the string address
 * @i: starter inder
 * @j: end index
 * Return: 1 if s is palindrome, 0 otherwise
 */
int pal_check(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i < j)
			return (pal_check(s, i + 1, j - 1));
		else
			return (1);
	}
	else
		return (0);
}
/**
 * is_palindrome - check wheather the string plaindrome or not
 * @s: the string to be checked
 *
 * Return: 1 if the sring is plaindrome 0 if not
 */
int is_palindrome(char *s)
{
	return (pal_check(s, 0, _strlen(s) - 1));
}
