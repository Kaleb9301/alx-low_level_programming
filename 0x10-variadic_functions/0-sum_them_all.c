#include "variadic_functions.h"

/**
 * sum_them_all - adds all he numbes
 * @n: the number of paramets pased
 * Return: Always
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	
	va_start(ap, n);

	if (n == 0)
		return (0);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
