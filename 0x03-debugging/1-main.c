#include <stdio.h>

/**
 * main - causes an infinite loo
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinit loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	printf("Infinte loop avoided! \\o/\n");

	return (0);
}