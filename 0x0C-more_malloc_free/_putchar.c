#include <unistd.h>

/**
 * _putcar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is teturned , and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
