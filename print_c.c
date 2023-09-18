#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int a = 0;
	va_list list;

	if (format == NULL)
	{
		return (1);
	}
	va_start(list, format);
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
		}
		if (*format == '\0')
		{
			break;
		}
		if (*format == 'c')
		{
			char i = va_arg(list, int);

			write(1, &i, 1);
			a++;
		}
		format++;
	}

	va_end(list);
	return (a);
}
