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

/**
 * int_format - prints integers
 *
 * @arg: va_list of integers
 * Return: number of bytes
 */
int int_format(va_list arg)
{
	int len = 0, i, num;
	int c;
	int buf[1000000];

	num = va_arg(arg, int);
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
		len++;
	}

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num)
	{
		buf[len] = num % 10;
		num = num / 10;
		len++;
	}
	i = len - 1;

	for (; i >= 0; i--)
	{
		c = buf[i] + 48;
		write(1, &c, 1);
	}
	return (len);
}
