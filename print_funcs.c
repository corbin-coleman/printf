#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

int print_s(va_list args)
{
	char *str;
	int i, chars;

	i = chars = 0;
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		chars++;
	}
	return (chars);
}

int print_int(va_list args)
{
	int chars;
	int n;

	n = va_arg(args, int);
	chars = print_number(n);
	return (chars);
}
