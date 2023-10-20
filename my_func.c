#include "main.h"
#include <stdarg.h>

/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */

int print_c(va_list args)
{
	int a;

	a = va_arg(args, int);
	return (_putchar(a));
}
/**
 * print_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int a , count = 0;
	char *str;

	a = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_d(va_list args)
{

	unsigned int a, step, step_num, count;
	int b;

	count = 0;
	b = va_arg(args, int);
		if (b > 0)
		{
			a = b;
		}
		else
		{
			a = (b * -1);
			count += _putchar('-');
		}

	step = a;
	step_num = 1;
	while (step > 9)
	{
		step /= 10;
		step_num *= 10;
	}
	while (step_num >= 1)
	{
		count += _putchar(((a / step_num) % 10) + '0');
		step_num /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
