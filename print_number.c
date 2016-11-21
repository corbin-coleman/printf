#include "holberton.h"
#include <stdio.h>
/**
 * print_number - Print the given int one digit at a time
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int chars;

	chars = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
		n *= -1;
	else
		_putchar('-');
	if ((n / 10) != 0)
	{
		chars = print_number((n / 10) * -1);
	}
	_putchar((n % 10) * -1 + '0');
	chars += 1;
	return (chars);
}
