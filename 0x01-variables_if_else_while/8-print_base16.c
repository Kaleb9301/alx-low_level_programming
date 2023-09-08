#include <stdio.h>
/**
 * main - Entery point
 *
 * print all the number of base 16 in lower case, folled by new line
 * Your can onl use the putchar function
 * (ever other fucntion(printf, puts, etc ..)is  forbidden)
 * All your code should be in the main function
 * You can only use putchar theree times in your code
 *  Return:Always o (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 16; numbers++)
	{
		if (numbers < 10)
			putchar('0' + numbers);
		else
			putchar('a' + numbers % 10);
	}
	putchar('\n');
	return (0);
}
