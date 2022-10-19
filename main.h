#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct identifier - it holds the variables
 *
 * @fp: format id
 * @ptr: function pointer
 */
typedef struct identifier
{
	char fp;
	int (*ptr)(va_list);
} identifier;

int _printf(const char *format, ...);
int char_format(va_list arg);
int str_format(va_list arg);
int int_format(va_list arg);
int binary_format(va_list arg);
int octal_format(va_list arg);
int big_hex_format(va_list arg);
int small_hex_format(va_list arg);
int unsigned_format(va_list arg);
int special_format(va_list arg);
int (*specifier(char c))(va_list);
int p_format(va_list arg);

#endif /*MAIN_H*/
