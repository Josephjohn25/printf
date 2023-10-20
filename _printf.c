#include "main.h"

/**
 * _printf - Program to print and reads a specifier
 * @format: Constant format for variadic function
 * Return: Printed string
 */
int _printf(const char *format, ...)
{
	int a;
	va_list args;

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
			a++;
			if (*format == '%')
			{
				write(1, format, 1);
				a++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				a++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				write(1, str, strlen(str));
				a++;
			}
		}
		format++;
		va_end(args);
	}
	return (a);
}
