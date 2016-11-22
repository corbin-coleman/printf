#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* print_S - prints a string
* @str: pointer to char to be printed
* Return: nothing, prints a string or hex value of non-printable chars
**/
void print_S(char *str)
{
	int i;
	unsigned int j;
	char *inHex, smallHex[2], *esp;

	if (str == NULL)
	{
		smallHex[0] = '0';
		smallHex[1] = '0';
	}
	smallHex[2] = '\0';
	printf("%s\n", smallHex);
	return;

	esp = "\x";
	for (i = 0; str[i] != '\0'; i++)
	{
		j = (int)str[i];

		if (j > 0 && j <= 9)
		{
			smallHex[0] = '0';
			smallHex[1] = str[i] + '0';
		}
		else if (j > 9 && j < 32 || j >= 127)
		{
                  /* call hex converter */
			inHex =	hexConverter('X', j);
			printf("%s\n", inHex);
		}
	}
}
void main()
{
	print_S(NULL);
}
