#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifiers - Struct for format
 * @specifiers: Struct format
 * @f: the function associed
 *
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} spec_t;

int _myputchar(char c);
int _printf(const char *format, ...);
int get_func(char conv, va_list args);


int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args);
int print_num(va_list args);

#endif
