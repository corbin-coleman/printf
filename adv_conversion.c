#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* print_o - prints the octal conversion of a decimal number
* @args: number to be printed
* @buffer: space used for printing
* @buflen: buffer length
* @bufpos: current buffer index
* Return: numbers of chars written to buffer
**/
int print_o(va_list args, char buffer[], int *buflen, int *bufpos)
{
	int numChars, i;
	unsigned int n;
	char *octal;

	n = va_args(args, unsigned int);
	octal = octConverter(n);
	if (octal == NULL)
		octal = "(nil)";
	i = 0;
	while(octal[i] != '\0')
	{
		buffer[*bufpos] = octal[i];
		*bufpos += 1;
		*buflen += 1;
		if (*buflen == 1024)
		{
			*bufpos = 0;
			write_buffer(buffer, buflen);
		}
		i++, numChars;
	}
	return (numChars);
}

int print_hex(va_list args, char buffer[], int *buflen, int *bufpos)
{
}

int print_heX(va_list args, char buffer[], int *buflen, int *bufpos)
{
}

int print_b(va_list args, char buffer[], int *buflen, int *bufpos)
{
}

int print_S(va_list args, char buffer[], int *buflen, int *bufpos)
{
}
