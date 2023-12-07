#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_list - this prints the elemet of the list
 *
 * @h: the lis head pointer
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			_printf("[0] (nill)\n");
		}
		else
		{
			_printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * _printf - prints formated text.
 * @format: the text to printed
 *
 * Return: the character printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list data;

	va_start(data, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(data, int));
					break;
				case 's':
					count += print_string(va_arg(data, char *));
					break;
				case 'i':
					count += print_decimal(va_arg(data, int));
					break;
				case 'd':
					count += print_decimal(va_arg(data, int));
					break;
				default:
					count += _putchar(format[i]);
					i--;
					break;

			}
			i += 2;
		}
	}
	va_end(data);
	return (count);
}

/**
 * print_decimal - print numbers
 * @value: teh number to be printed
 *
 * Return: the number of digit in the value
 */
int print_decimal(int value)
{
	int count = 0;

	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}
	if (value / 10)
		count += print_decimal(value / 10);
	count += _putchar(value % 10 + '0');

	return (count);
}

/**
 * print_string - prints out the stirngs
 * @string: the string to be printed
 *
 * Return: the number of characte printed by this funtion
 */
int print_string(char *string)
{
	int count = 0, i;

	if (string == NULL)
		return (-1);
	for (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}
	return (count);
}
