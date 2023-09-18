#include "main.h"
#include <unistd.h>

/**
 * _printf - Emulate the original.
 * @format: Format by specifier.
 * Return: count of chars.
 */
int _printf(const char *format, ...)
{
	int a = 0, cou = 0, count;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[a])
	{
		count = 0;
		if (format[a] == '%')
		{
			if (!format[a + 1] || (format[a + 1] == ' ' && !format[a + 2]))
			{
				cou = -1;
				break;
			}
			count += get_function(format[a + 1], args);
			if (count == 0)
				cou += _putchar(format[a + 1]);
			if (count == -1)
				cou = -1;
			a++;
		}
		else
		{
			(cou == -1) ? (_putchar(format[a])) : (cou += _putchar(format[a]));
		}
		a++;
		if (cou != -1)
			cou += count;
	}
	va_end(args);
	return (cou);
}
