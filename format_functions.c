#include "main.h"

/**
 * char_format - prints a character to stdout.
 * @arg: va_list variable
 * Return: number of bytes.
 */

int char_format(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	write(1, &c, 1);
	return (1);
}

/**
 * str_format - prints a string to stdout.
 * @arg: va_list variable
 * Return: number of bytes
 */

int str_format(va_list arg)
{
	char *s;
	int len;

	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";

	len = strlen(s);
	write(1, s, len);

	return (len);
}
