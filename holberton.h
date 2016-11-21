#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct char_funcs - Struct to find function based on char
 * @c: char to check as key
 * @f: Pointer to function to call
 */
typedef struct char_funcs {
	char *c;
	int (*f)();
} char_funcs_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_c();
int print_s();
int print_number(int n);
int print_int();
char *binConverter(unsigned int n);
char *octConverter(unsigned int n);
char *hexConverter(char type, unsigned int n);
unsigned int unsignedIntConverter(int n);
char *print_P(void *ptr);
void print_S(char *str);

#endif
