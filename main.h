#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct print - Typedef print function
 * @count: Type of count
 * @f: count function
 */

typedef struct print
{
	char *count;
	int (*f)(va_list);
} func;

int _printf(const char *format, ...);
int (*print_function(char a))(va_list);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_percent(va_list args);

#endif /* MAIN_h */
