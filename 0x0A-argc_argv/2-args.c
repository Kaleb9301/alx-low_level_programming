#include <stdio.h>

/**
 * main -print each argument in new line
 * @argc: number of argument
 * @argv: the arguments
 * Return: 0 always(Successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
