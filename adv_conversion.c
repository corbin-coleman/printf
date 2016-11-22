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

	i = numChars = 0;
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
		i++, numChars++;
	}
	free(octal);
	return (numChars);
}
/**
* print_hex - prints the hexadecimal conversion of a decimal number, lowercase
* @args: number to be printed
* @buffer: space used for printing
* @buflen: buffer length
* @bufpos: current buffer index
* Return: numbers of chars written to buffer
**/
int print_hex(va_list args, char buffer[], int *buflen, int *bufpos)
{
	int numChars, i;
	unsigned int n;
	char *hex;

	n = va_args(args, unsigned int);
	hex = hexConverter('x', n);
	if (hex == NULL)
		hex = "(nil)";
	i = numChars = 0;
	while(hex[i] != '\0')
	{
		buffer[*bufpos] = hex[i];
		*bufpos += 1;
		*buflen += 1;
		if (*buflen == 1024)
		{
			*bufpos = 0;
			write_buffer(buffer, buflen);
		}
		i++, numChars++;
	}
	free(hex);
	return (numChars);
}
/**
* print_heX - prints the hexadecimal conversion of a decimal number, uppercase
* @args: number to be printed
* @buffer: space used for printing
* @buflen: buffer length
* @bufpos: current buffer index
* Return: numbers of chars written to buffer
**/
int print_heX(va_list args, char buffer[], int *buflen, int *bufpos)
{
	int numChars, i;
	unsigned int n;
	char *heX;

	n = va_args(args, unsigned int);
	heX = hexConverter('X', n);
	if (heX == NULL)
		heX = "(nil)";
	i = numChars = 0;
	while(heX[i] != '\0')
	{
		buffer[*bufpos] = heX[i];
		*bufpos += 1;
		*buflen += 1;
		if (*buflen == 1024)
		{
			*bufpos = 0;
			write_buffer(buffer, buflen);
		}
		i++, numChars++;
	}
	free(heX);
	return (numChars);
}
/**
 * print_b - prints the binary conversion of a decimal number
 * @args: number to be printed
 * @buffer: space used for printing
 * @buflen: buffer length
 * @bufpos: current buffer index
 * Return: numbers of chars written to buffer
 **/
int print_b(va_list args, char buffer[], int *buflen, int *bufpos)
{
	int numChars, i;
	unsigned int n;
	char *bin;

	n = va_args(args, unsigned int);
	bin = binConverter(n);
	if (bin == NULL)
		bin = "(nil)";
	i = numChars = 0;
	while(bin[i] != '\0')
	{
		buffer[*bufpos] = bin[i];
		*bufpos += 1;
		*buflen += 1;
		if (*buflen == 1024)
		{
			*bufpos = 0;
			write_buffer(buffer, buflen);
		}
		i++, numChars++;
	}
	free(bin);
	return (numChars);
}
/**
* print_S - prints printable chars, else their hexa value in uppercase
* @args: number to be printed
* @buffer: space used for printing
* @buflen: buffer length
* @bufpos: current buffer index
* Return: numbers of chars written to buffer
**/
int print_S(va_list args, char buffer[], int *buflen, int *bufpos)
{
	int numChars, i;
	int j;
	char *str, *inHex;

	str = va_args(args, char *);
	if (str == NULL)
		str = "\x00";

	i = 0 = numChars;
	while (str[i] != '\0')
	{
		j = (int)str[i];
		if (j > 0 && j < 32 || j >= 127)
		{
			buffer[*bufpos] = '\x';
			*bufpos += 1;
			*buflen += 1;
			if (*buflen == 1024)
			{
				*bufpos = 0;
				write_buffer(buffer, buflen);
			}
			if (j > 0 && j <= 9)
			{
				buffer[*bufpos] = '0';
				*bufpos += 1;
				*buflen += 1;
				if (*buflen == 1024)
				{
					*bufpos = 0;
					write_buffer(buffer, buflen);
				}
				buffer[*bufpos] = str[i] + '0';
				*bufpos += 1;
                                *buflen += 1;
				if (*buflen == 1024)
				{
					*bufpos = 0;
					write_buffer(buffer, buflen);
				}
			}
			else if (j > 9 && j < 32 || j >= 127)
			{
				j = 0;
				inHex = hexConverter('X', (unsigned int)j);
				while (inHex[j] != '\0')
				{
					buffer[*bufpos] = inHex[j];
					*bufpos += 1;
					*buflen += 1;
					if (*buflen == 1024)
					{
						*bufpos = 0;
						write_buffer(buffer, buflen);
					}
					j++;
				}
			}
			numChars += 3;
		}
	 	else
		{
			buffer[*bufpos] = str[i];
			*bufpos += 1;
			*buflen += 1;
			if (*buflen == 1024)
			{
				*bufpos = 0;
				write_buffer(buffer, buflen);
			}
			numChars++;
		}
		i++;
	}
	return (numChars);
}
