#include "function_pointers.h"

/**
 * print_name - prints the name based on passed function as argumetn'
 * @name: name to be printed
 * @f: the function passed ass argument
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
