#include <unistd.h>

/**
 * _putchar - writes the characte c to stdout
 * @c: The charater to print
 *
 * Return: on success 1.
 * On error, -1 is reutrned and errono is set approperiatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
