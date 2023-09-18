#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int c = *i + 1;
	int pre = -1;

	if (format[c] != '.')
		return (pre);

	pre = 0;

	for (c += 1; format[c] != '\0'; c++)
	{
		if (is_digit(format[c]))
		{
			pre *= 10;
			pre += format[c] - '0';
		}
		else if (format[c] == '*')
		{
			c++;
			pre = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = c - 1;

	return (pre);
}
