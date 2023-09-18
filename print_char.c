#include "main.h"
#include <unistd.h>

/**
 * print_char - print a character
 * @args: the arguments
 * Return: count of chars.
 */

int print_char(va_list args)
{
	char b = va_arg(args, int);

	_putchar(b);

	return (1);
}
