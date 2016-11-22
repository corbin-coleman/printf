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
void write_buffer(char buffer[], int *buflen);
void initialize_buffer(char buffer[]);
char *binConverter(unsigned int n);
char *octConverter(unsigned int n);
char *hexConverter(char type, unsigned int n);
int print_c();
int print_s();
int print_number(int n, char buffer[], int *buflen, int *bufpos);
int print_Unum(unsigned int n, char buffer[], int *buflen, int *bufpos);
int print_int();
int print_u();
int print_o();
int print_hex();
int print_heX();
int print_b();
int print_S();
int print_r();
int print_R();
char *print_P(void *ptr);

#endif
