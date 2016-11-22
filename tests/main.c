#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char c = 'a';
	char *str = "Bye";
	int i;

        _printf("%u\n%o\n%x\n%X\n%b\n%S\n%r\n%R\n", -98, 109, 312, 445, 801,
		"\x31", "abcde", "abnoz");
	return (0);
}
