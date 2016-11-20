#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char c = 'a';
	char *str = "Bye";
	int i;

        _printf("Hello bob\n%c\n%s\n%s\n%i\n%d\n", c, "bye", str, 10, 2000);
	i = _printf("%s%d%i%c\n", "BOB ", 22, -98, 'p');
	_printf("%d\n", i);
	i = printf("%s%d%i%c\n", "BOB ", 22, -98, 'p');
	_printf("%d\n", i);
	return (0);
}
