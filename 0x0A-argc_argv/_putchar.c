#include <unistd.h>

/**
 * _putchar -writes teh character c to stdout
 * @c: The character to print 
 *
 * Return:on suceess 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
