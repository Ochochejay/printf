#include "main.h"

/**
 * char_format - prints a character to stdout.
 * @arg: valist variable
 * Return: number of bytes.
 */

int char_format(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	write(1, &c, 1)
	return (1);
}
