#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Print out a formatted string
 * @format: Format of the string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list print_this;
	char_funcs_t conversions[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_int},
		{"d", print_int}
	};
	int i, chars, j;

	i = chars = 0;
	va_start(print_this, format);
	while (format[i] != '\0' && format != NULL)
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 4)
			{
				if (format[i] == *conversions[j].c)
				{
					chars += conversions[j].f(print_this);
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			chars++;
		}
		i++;
	}
	va_end(print_this);
	return (chars);
}
