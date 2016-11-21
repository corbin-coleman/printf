#include <stdio.h>
#include <stdlib.h>

/**
* print_S - prints a string
* @str: pointer to char to be printed
* Return: nothing, prints a string or hex value of non-printable chars
**/
void print_S(char *str)
{
	int i, j;
	char *inHex, char smallHex[2];

	if (str == NULL)
	{
		smallHex[0] = '0';
		smallHex[1] = '0';
	}
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
			inHex =	hexConveter('X', j);
		}
	}
}
