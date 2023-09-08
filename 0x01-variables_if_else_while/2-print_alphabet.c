#include <stdio.h>
/**
 * main - Entry point, the main fuction prints out lower case alphabet then new line
 *
 * Return : Always 0(Success)
 */
int main(void)
{
	char letter;
	
	for(letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
