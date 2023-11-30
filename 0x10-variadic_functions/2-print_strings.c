#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_strings - print the strings with separatr
 * @separator: stirng which separet the string
 * @n: number of arguments
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
