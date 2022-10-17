#include "main.h"

/**
 * _printf - performs function similar to printf
 *
 * @format: string
 *
 * Return: total length of the string or -1 on failure
 */

int _printf(const char *format, ...)
{
	identifier id[] = {
		{'c', char_format},
		{NULL, NULL}
	};

	int i, j, k, len = 0;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (id[j].fp)
			{
				if (id[j].fp == format[i])
				{
					k = id[j].fp == format[i])
					len += k;
					break;
				}
				j++;
			}
		}
		else
		{
			write(1, format + i, 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
