#include "holberton.h"

/**
 * print_number - Print the given int one digit at a time
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n, char buffer[], int *buflen, int *bufpos)
{
	int chars;
	int sign_print;

	chars = sign_print = 0;
	if (n == 0)
	{
		buffer[*bufpos] = '0';
		*bufpos += 1;
		*buflen += 1;
		if (*buflen == 1024)
		{
			*bufpos = 0;
			write_buffer(buffer, buflen);
		}
		return (1);
	}
	else if (n > 0)
		n *= -1;
	else
	{
		buffer[*bufpos] = '-';
		*bufpos += 1;
		*buflen += 1 ;
		if (*buflen == 1024)
		{
			*bufpos = 0;
			write_buffer(buffer, buflen);
		}
		sign_print = 1;
	}
	if ((n / 10) != 0)
	{
		chars = print_number(((n / 10) * -1), buffer, buflen, bufpos);
	}
	buffer[*bufpos] = (n % 10) * -1 + '0';
	*bufpos += 1;
	*buflen += 1;
	if (*buflen == 1024)
	{
		*bufpos = 0;
		write_buffer(buffer, buflen);
	}
	if (sign_print > 0)
		chars += sign_print;
	chars++;
	return (chars);
}

int print_Unum(unsigned int n, char buffer[], int *buflen, int *bufpos)
{
	int numChars;

	numChars = 0;
	if (n == 0)
	{
		buffer[*bufpos] = '0';
		*bufpos += 1;
		*buflen += 1;
		if (*buflen == 1024)
		{
			*bufpos = 0;
			write_buffer(buffer, buflen);
		}
		return (1);
	}
	if ((n / 10) != 0)
		numChars = print_Unum((n / 10), buffer, buflen, bufpos);
	buffer[*bufpos] = (n % 10) + '0';
	*bufpos += 1;
	*buflen += 1;
	if (*buflen == 1024)
	{
		*bufpos = 0;
		write_buffer(buffer, buflen);
	}
	numChars++;
	return (numChars);
}
