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
		{'s', str_format}
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