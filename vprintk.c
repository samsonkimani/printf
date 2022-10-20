#include "main.h"

/**
 * vprintz - determines which function to invoke and
 * returns the number of printed characters
 * @format: the format
 * @list: array to the function
 * @arg_list: the arguments passed
 *
 * Return: total number of characters printed
 */

int vprintz(const char *format, print_obj list[], va_list arg_list)
{

	int i, j, retun_val, printed_chars;

	printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; list[j].stm != NULL; j++)
			{
				if (format[i + 1] == list[j].stm[0])
				{
					retun_val = list[j].f(arg_list);
					if (retun_val == -1)
						return (-1);
					printed_chars += retun_val;
					break;
				}
			}
			if (list[j].stm == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
