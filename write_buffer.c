#include <unistd.h>
#include "holberton.h"

void write_buffer(char buffer[], int *buflen)
{
	write(1, buffer, *buflen);
	if (*buflen == 1024)
		initialize_buffer(buffer);
	*buflen = 1;
}
