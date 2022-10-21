#include "main.h"

/**
 * reverse_string - reverses a string.
 * @arg: va_list arg
 * Return: length of string
 */

int reverse_string(va_list arg)
{
	char tmp, *s;
	int i = 0, j = 0, len;

	s = va_arg(arg, char *);
	if (!s)
		return (0);

	len = strlen(s);
	j = len - 1;

	while (i <= j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}

	write(1, s, len);

	return (len);
}
