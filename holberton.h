#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>
/**
 * struct char_funcs - Struct to find function based on char
 * @c: char to check as key
 * @f: Pointer to function to call
 */
typedef struct char_funcs
{
	char *c;
	int (*f)();
} char_funcs_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args, char buffer[], int *buflen, int *bufpos);
int print_s(va_list args, char buffer[], int *buflen, int *bufpos);
int print_number(int n, char buffer[], int *buflen, int *bufpos);
int print_int(va_list args, char buffer[], int *buflen, int *bufpos);
void write_buffer(char buffer[], int *buflen, int *bufpos);
void initialize_buffer(char buffer[]);
#endif
