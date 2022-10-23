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
int print_binary(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
int print_reversed(va_list arg);
int rot13(va_list);

#endif
