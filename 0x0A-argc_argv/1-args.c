#include <stdio.h>

/**
 * main - prints the numbe of argument
 * @argc: number of argumetn
 * @argv: strings of argumets
 * Return: 0 alwaysi(Success)
 */
int main(int argc, char *argv[])
{
	char *c;

	c = argv[0];
	c++;
	printf("%d\n", argc - 1);
	return (0);
}
