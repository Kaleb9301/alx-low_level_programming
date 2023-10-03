#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of for arg value
 * @argc: number of argumet
 * @argv: the argumetn
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, value, coins;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = 0;
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		coins += value / cents[i];
		value %= cents[i];
	}
	printf("%d\n", coins);
	return (0);
}
