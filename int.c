#include "main.h"

/**
 * print_int - Print int
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int a = BUFF_SIZE - 2;
	int negative = 0;
	long int b = va_arg(types, long int);
	unsigned long int c;

	b = convert_size_number(b, size);

	if (b == 0)
		buffer[a--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	c = (unsigned long int)b;

	if (b < 0)
	{
		c = (unsigned long int)((-1) * b);
		negative = 1;
	}

	while (c > 0)
	{
		buffer[a--] = (c % 10) + '0';
		c /= 10;
	}

	a++;

	return (write_number(negative, a, buffer, flags, width, precision, size));
}
