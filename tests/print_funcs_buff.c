#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

int print_c(va_list args, char buffer[], int *buflen, int *bufpos)
{
	if (*buflen < 1024)
	{
		buffer[*bufpos] = va_arg(args, int);
		*bufpos++;
		*buflen++;
	}
	else
	{
		*bufpos = 0;
		write_buffer(buffer, buflen);
		buffer[*bufpos] = va_arg(args, int);
		*bufpos++;
		*buflen++;
	}
	return (1);
}

int print_s(va_list args, char buff[], int *buflen, int *bufpos)
{
	char *str;
	int i, chars;

	i = chars = 0;
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
	{
		buffer[*bufpos] = str[i];
		*bufpos++;
		*buflen++;
		if (*buflen == 1024)
		{
			
		}
		i++;
		chars++;
	}
	return (chars);
}

int print_int(va_list args, )
{
	int chars;
	int n;

	n = va_arg(args, int);
	chars = print_number(n);
	return (chars);
}
