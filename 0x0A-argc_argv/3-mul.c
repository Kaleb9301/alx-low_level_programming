#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculatio the mulitplication using the argumets
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	result = atoi(argv[1]);
	for (i = 2; i < argc; i++)
	{
		result *= atoi(argv[2]);
	}
	printf("%d\n", result);
	return (0);
}
