#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
int _putchar(char c);
#endif /* MAIN_h */
