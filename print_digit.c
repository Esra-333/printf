#include "main.h"
#include <unistd.h>

/**
 * print_digit - prant an  integers.
 * @args: argument.
 * Return: count of chars.
 */

int print_digit(va_list args)
{
	int a = 1;
	int count = 0;
	long int dig = va_arg(args, int);
	long int digit;

	if (dig < 0)
	{
		count += _putchar('-');
		dig *= -1;
	}

	if (dig < 10)
		return (count += _putchar(dig + '0'));

	digit = dig;

	while (digit > 9)
	{
		a *= 10;
		digit /= 10;
	}
	while (a >= 1)
	{
		count += _putchar(((dig / a) % 10) + '0');
		a /= 10;
	}

	return (count);
}
