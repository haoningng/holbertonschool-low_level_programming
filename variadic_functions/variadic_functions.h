#ifndef HEADER_FILE

#define HEADER_FILE

#include <stdarg.h>

/**
 * struct print_type - Struct print_type
 *
 * @format_type: the character representating different format type
 * @f: the function pointer to print different format type
 */
typedef struct print_type
{
	char format_type;
	void (*f)(va_list args);
} print_type;

/* These are the different functions to print different format type */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
