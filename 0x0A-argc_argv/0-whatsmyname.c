#include <stdio.h>

/**
 * main - prints the input argument
 * @argc: the number of the argments
 * @argv: the strings
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{

	printf("%s\n", argv[0]);
	argc++;
	return (0);
}
