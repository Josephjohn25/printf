#include "main.h"

/**
 * _printf - Program to print and reads a specifier
 * @format: Constant format for variadic function
 * Return: Printed string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int a = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			a++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				a++;
			}
			else if (*format == 'c')
			{
				char b = va_arg(args, int);

				write(1, &b, 1);
				a++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				int strlen = 0;
				if (str[strlen] != '\0')
					strlen++;
				write(1, str, strlen);
				a += strlen;
			}
		}	format++;
	}	va_end(args);
	return (a);
}
