#include <unistd.h>

/**
 * _putchar - Print out a character
 * @c: Character to print out
 *
 * Return: 1 on success, -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
