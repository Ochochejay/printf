#include "main.h"

/**
 * reverse_string - reverses a string.
 * @arg: va_list arg
 * Return: length of string
 */

int reverse_string(va_list arg)
{
	char tmp, *str, *s;
	int i = 0, j = 0, len;

	str = va_arg(arg, char *);
	if (!str)
		return (0);

	len = strlen(str);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	i = 0, j = len - 1;

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


/**
 * rot13 - formats a string rot 13
 * @arg: va_list arg
 *
 * Return: length of string
 */
int rot13(va_list arg)
{
	char *str, *s;
	int len, i;

	str = va_arg(arg, char *);
	len = strlen(str);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || ((s[i] >= 'a' && s[i] <= 'm')))
			s[i] += 13;
		else if ((s[i] >= 'N' && s[i] <= 'Z') ||
				((s[i] >= 'n' && s[i] <= 'z')))
			s[i] -= 13;
		i++;
	}
	_printf("%s", s);
	return (len);
}
