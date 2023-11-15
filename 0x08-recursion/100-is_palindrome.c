#include "main.h"

/**
 * is_palindrome - check wheather the string plaindrome or not
 * @s: the string to be checked
 *
 * Return: 1 if the sring is plaindrome 0 if not
 */
int is_palindrome(char *s)
{
	int count, start_index, end_index;
	char *temp;

	temp = s;
	count = 0;
	start_index = 0;
	while (*temp != '\0')
	{
		count++;
		temp++;
	}
	end_index = count - 1;
	while (start_index < end_index)
	{
		if (s[start_index] != s[end_index])
			return (0);
		start_index++;
		end_index--;
	}
	return (1);
}
