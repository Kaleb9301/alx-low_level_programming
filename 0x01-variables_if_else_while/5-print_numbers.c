#include <stdio.h>
/**
 * main - Entery point
 *
 * print single digit number of base 10
 * this means number for 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
		printf("%d", numbers);
	putchar('\n');
	return (0);
}
