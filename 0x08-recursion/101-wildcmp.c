#include "main.h"

/**
 * str_cmp - copare string by stirng
 * @s1: the address of the first stirng.
 * @s2: the address of he second stirng
 * @i: the inder of he first string
 * @j: he index of he second stirng
 * Return: 1 if s if they comapre to be similira, 0 otherwise.
 */
int str_cmp(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_cmp(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_cmp(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_cmp(s1, s2, i + 1, j) || str_cmp(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if the string can be consider similar
 * @s1: the address of the first stirng.
 * @s2: the address of the second string.
 *
 * Return: 1 if the are similar 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (str_cmp(s1, s2, 0, 0));
}
