#include <unistd.h>
#include "holberton.h"

/**
 * write_buffer - Print out the buffer of all characters to print
 * @buffer: The buffer with the string needed to print
 * @buflen: Pointer to the length of buffer
 * @bufpos: Pointer to the postion inside buffer
 */
void write_buffer(char buffer[], int *buflen, int *bufpos)
{
	write(1, buffer, *buflen);
	*bufpos = 0;
	if (*buflen == 1024)
		initialize_buffer(buffer);
	*buflen = 1;
}
