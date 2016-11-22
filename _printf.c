#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * init_struct - Initialize all the struct values
 * @conversions: The struct to intialize to proper values
 * Description: Largely created to overcome function line limit
 */
void init_struct(char_funcs_t conversions[])
{

	conversions[0].c = "c";
	conversions[0].f = print_c;
	conversions[1].c = "s";
	conversions[1].f = print_s;
	conversions[2].c = "i";
	conversions[2].f = print_int;
	conversions[3].c = "d";
	conversions[3].f = print_int;
	conversions[3].c = "u";
        conversions[3].f = print_u;
	conversions[3].c = "o";
        conversions[3].f = print_o;
	conversions[3].c = "x";
        conversions[3].f = print_hex;
	conversions[3].c = "X";
        conversions[3].f = print_heX;
	conversions[3].c = "b";
        conversions[3].f = print_b;
	conversions[3].c = "S";
        conversions[3].f = print_S;
}

/**
 * _printf - Print out a formatted string
 * @format: Format of the string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list print_this;
	char_funcs_t conversions[4];
	char buffer[1024];
	int i, chars, j, buflen, bufpos, *buflenptr, *bufposptr;

	init_struct(conversions);
	initialize_buffer(buffer);
	i = chars = bufpos = 0;
	buflen = 1; buflenptr = &buflen; bufposptr = &bufpos;
	va_start(print_this, format);
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 4; j++)
			{
				if (format[i] == *conversions[j].c)
				{
					chars += conversions[j].f(print_this,
								  buffer,
								  buflenptr,
								  bufposptr);
				}
			}
		}
		else
		{
			buffer[*bufposptr] = format[i];
			*bufposptr += 1; *buflenptr += 1;
			if (*buflenptr == 1024)
				write_buffer(buffer, buflenptr);
			chars++;
		}
	}
	write_buffer(buffer, buflenptr);
	va_end(print_this);
	return (chars);
}
