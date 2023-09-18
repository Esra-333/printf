#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - print a string.
 * @args: argument.
 * Return: character count.
 */

int print_string(va_list args)
{
	int a;
	int cou = 0;
	char *str = va_arg(args, char *);

	if (!str)
	{
		str = "(null)";
	}
	if (str[0] == '\0')
	{
		return (-1);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		cou += _putchar(str[a]);
	}

	return (cou) ;
}
