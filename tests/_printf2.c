#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
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
	char buffer[1024];
	int i, chars, j, buflen, bufpos;
	int *buflenptr, *bufposptr;

	i = chars = bufpos = 0;
	buflen = 1;
	buflenptr = &buflen;
	bufposptr = &bufpos;
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
					chars += conversions[j].f(print_this,
								  buffer,
								  buflenptr,
								  bufposptr);
				}
				j++;
			}
		}
		else
		{
			buffer[*bufposptr] = format[i];
			*bufposptr += 1;
			*buflenptr += 1;
			if (*buflenptr == 1024)
			{
				*bufposptr = 0;
				write_buffer(buffer, buflenptr);
			}
			chars++;
		}
		i++;
	}
	write_buffer(buffer, buflenptr);
	va_end(print_this);
	return (chars);
}
