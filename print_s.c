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
		if (*format == 's')
		{
			char *s = va_arg(list, char*);
			int s_len = 0;

			while (s[s_len] != '\0')
			{
				s_len++;
			}
			write(1, s, s_len);
			a += s_len;
		}
		format++;
	}
	va_end(list);
	return (a);
}
