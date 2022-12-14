#include "main.h"

/**
 * specifier - gets formatter
 * @c: letter formatter
 * Return: A pointer to a func of formatter
 */

int (*specifier(char c))(va_list)
{
	identifier id[] = {
		{'c', char_format},
		{'s', str_format},
		{'d', int_format},
		{'i', int_format},
		{'b', binary_format},
		{'o', octal_format},
		{'X', big_hex_format},
		{'x', small_hex_format},
		{'u', unsigned_format},
		{'S', special_format},
		{'p', p_format},
		{'r', reverse_string},
		{'R', rot13},
		{'\0', NULL}
	};
	int i = 0;

	while ((id[i].fp))
	{
		if (id[i].fp == c)
			break;
		i++;
	}
	return (id[i].ptr);
}
