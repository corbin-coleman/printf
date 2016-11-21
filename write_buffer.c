#include <unistd.h>
#include "holberton.h"

void write_buffer(char buffer[], int *buflen)
{
	write(1, buffer, *buflen);
	*buflen = 1;
}
