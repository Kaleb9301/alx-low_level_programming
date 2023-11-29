#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints the name based on passed function as argumetn'
 * @name: name to be printed
 * @f: the function passed ass argument
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f != NULL)
		f(name);
}
