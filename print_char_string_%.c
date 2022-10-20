#include "main.h"

/**
 * print_character - print character
 * @arg_list: arguments passed
 * Return: return 1
 */

int print_character(va_list arg_list)
{
	_putchar(va_arg(arg_list, int));
	return (1);
}

/**
 * print_string - print a string
 * @arg_list: argument passed
 * Return: return the number of characters printed
 */

int print_string(va_list arg_list)
{
	int i;
	char *s;

	s = va_arg(arg_list, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * print_percentage - print the percentage
 * @arg_list: arguments
 * Return: 1
 */

int print_percentage(__attribute__((unused))va_list arg_list)
{
	_putchar('%');
	return (1);
}
