#include "main.h"

/**
 * _printf - returns a numbers of characters to be printed
 * @format: the character sign
 *
 * Return: printed characters
 */

int _printf(const char *format, ...)
{
	int printed_char_count;

	print_obj list[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percentage},
		{NULL, NULL}
	}

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(format, arg_list);

	printed_char_count = vprintk(format, list, arg_list);

	va_end(arg_list);

	return (printed_char_count);
}
