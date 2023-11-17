#include <stdio.h>
#include <stdlib.h>

/**
 * main - add the arguments
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	int i, sum, a;
	char  *flag;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		a = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += a;
		}

	}
	printf("%d\n", sum);
	return (0);
}
