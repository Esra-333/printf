#include "main.h"
#include <unistd.h>

/**
 * _printf - print the data .
 * @format: Format by specifier.
 * Return: count of chars.
 */
int _printf(const char *format, ...)
{
	int a = 0, count = 0, cou;
	va_list args;

	va_start(args, format)
		if (!format || (format[0] == '%' && !format[1]))
		{
		return (-1);
		}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	while (format[a])
	{
		cou = 0;
		if (format[a] == '%')
		{
			if (!format[a + 1] || (format[a + 1] == ' ' && !format[a + 2]))
			{
				count = -1;
				break;
			}
			cou += get_function(format[a + 1], args);
			if (cou == 0)
				count += _putchar(format[a + 1]);
			if (cou == -1)
				count = -1;
			a++;
		}
		else
		{
			(count == -1) ? (_putchar(format[a])) : (count += _putchar(format[a]));
		}
		a++;
		if (count != -1)
			count += cou;
	}
	va_end(args);
	return (count);
}
