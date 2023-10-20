#include "main.h"

/**
 * print_function - function for the specifier to print
 * @a: variable to the function
 * Return: function
 */
int (*print_function(char a))(va_list)
{
	int x = 0;
	func arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	while (arr[x].count)
	{
		if (a == arr[x].count[0])
			return (arr[x].f);
		x++;
	}
	return (NULL);
}
