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
	int i, len = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);

			else if (format[i] == '%')
				len += write(1, (format + i), 1);

			else
			{
				f = specifier(format[i]);
					len += f(args);
			}
		}

		else
			len += write(1, format + i, 1);

		i++;
	}

	va_end(args);
	return (len);
}
