#include "main.h"

/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	if (*format != '\0')
	{
		int step = 0, a = 0;
		int (*i)(va_list);
		va_list args;

		va_start(args, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		while (format != NULL && format[a] != '\0')
		{
			if (format[a] == '%')
			{
				if (format[a + 1] == '%')
				{
					step = step + _putchar(format[a]);
					a = a + 2;
				}
				else
				{
					i = print_function(format[a + 1]);
					if (i)
						step = step + i(args);
					else
						step = _putchar(format[a]) + _putchar(format[a + 1]);
					a = a + 2;
				}
			}
			else
			{
				step = step +  _putchar(format[a]);
				a++;
			}
		}
		va_end(args);
		return (step);
	}
	return (-1);
}
