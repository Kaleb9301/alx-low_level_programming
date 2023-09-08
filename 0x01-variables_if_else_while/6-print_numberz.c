#include <stdio.h>
/**
 *main - Entery point
 *print single digit number s baee 10
 *starting from 0
 *followed by a ne wline i
 * your are notallowed to use  any variable of type char
 * your can only use the put char function
 * every other function(printf, puts, etc..) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return:Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
		putchar('0' + numbers);
	putchar('\n');
	return (0);
}
