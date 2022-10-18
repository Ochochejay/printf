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
	int len = 0, i = 0;
	long int num;
	char c;
	int buf[20];

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
		buf[i] = num % 10;
		num = num / 10;
		len++, i++;
	}
	i--;

	for (; i >= 0; i--)
	{
		c = buf[i] + 48;
		write(1, &c, 1);
	}
	return (len);
}

/**
 * binary_format - prints the binary of unsigned int
 *
 * @arg: va_list of integers
 * Return: number of bytes
 *
 */
int binary_format(va_list arg)
{
	unsigned int len = 0;
	int i, num;
	char c;
	int buf[1000000];

	num = va_arg(arg, unsigned int);
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
		buf[i] = num % 2;
		num = num / 2;
		len++, i++;
	}
	i--;

	for (; i >= 0; i--)
	{
		c = buf[i] + 48;
		write(1, &c, 1);
	}
	return (len);
}
