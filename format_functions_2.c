#include "main.h"

/**
 * big_hex_format - prints the hexadecimal of a decimal
 *
 * @arg: va_list of integers
 *
 * Return: number of bytes
 *
 */
int big_hex_format(va_list arg)
{
	int buf[10];
	int i = 0, len = 0, num;
	char c;

	num = va_arg(arg, int);

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (num)
	{
		buf[i] = num % 16;
		num /= 16;
		len++, i++;
	}
	i--;

	for (; i >= 0; i--)
	{
		if (buf[i] >= 0 && buf[i] <= 9)
			c = buf[i] + 48;
		else if (buf[i] >= 10 && buf[i] <= 15)
			c = buf[i] + 55;
		write(1, &c, 1);
	}
	return (len);
}

/**
 * small_hex_format - prints the hexadecimal of a decimal
 *
 * @arg: va_list of integers
 *
 * Return: number of bytes
 *
 */
int small_hex_format(va_list arg)
{
	int buf[10];
	int i = 0, len = 0, num;
	char c;

	num = va_arg(arg, int);

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (num)
	{
		buf[i] = num % 16;
		num /= 16;
		len++, i++;
	}
	i--;

	for (; i >= 0; i--)
	{
		if (buf[i] >= 0 && buf[i] <= 9)
			c = buf[i] + 48;
		else if (buf[i] >= 10 && buf[i] <= 15)
			c = buf[i] + 87;
		write(1, &c, 1);
	}
	return (len);
}

/**
 * unsigned_format - prints integers
 *
 * @arg: va_list of integers
 * Return: number of bytes
 */
int unsigned_format(va_list arg)
{
	unsigned int len = 0, num;
	int i = 0;
	char c;
	int buf[20];

	num = va_arg(arg, unsigned int);

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
