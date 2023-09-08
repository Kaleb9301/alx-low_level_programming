#include <stdio.h>
/**
 * main - Entry point
 * print the lower case element except q and e
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		else
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
