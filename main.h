#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct convert - defines structure for functions
 *
 * @sym: operator
 *
 * @f: associated function
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert convert_t;

int _putchar(char c);
int _printf(const char *format, ...);
int format_reciever(const char *format, convert_t f_list[], va_list arg_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list args);

#endif
