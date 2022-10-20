#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

struct print_ob
{
	char *stm;
	int (*f)(int);
}

typedef print_ob print_obj;

/*main functions */
int _printf(const char *format, ...);


#endif
