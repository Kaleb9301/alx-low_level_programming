#include <stdio.h>
/**
 * main - Eneter point
 *
 * Return:Always 0 (Succsess)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9;  numbers++)
	{
		putchar('0' + numbers);
		if (numbers == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
