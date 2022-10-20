#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct print_ob - object to print function characters
 * @stm:object
 * @f:function pointer
 */
struct print_ob
{
	char *stm;
	int (*f)(va_list);
};

typedef struct print_ob print_obj;

/*main functions */
int vprintz(const char *format, print_obj list[], va_list arg_list);
int _putchar(char);
int _printf(const char *format, ...);
int print_character(va_list);
int print_string(va_list);
int print_percentage(va_list);
int print_integer(va_list);
int print_number(va_list);
int unsigned_integer(va_list);
#endif
