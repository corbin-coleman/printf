#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 1024

/**
* writeBuf - writes a local buffer of 1024 chars
* @str: pointer to char
* Return: 0 on success, else -1
**/
int writeBuf(char *str)
{
	size_t bytes;

	bytes = write(1, str, BUFSIZE);
	if (bytes != BUFSIZE)
	{
		bytes = BUFSIZE - bytes;
		return (bytes);
	}
}

void main()
{
	size_t bufsize = writeBuf("hello\n\0");
	printf("%zu\n", bufsize);
}
