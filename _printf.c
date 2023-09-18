#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int a;
	int p = 0, p_c = 0;
	int f, w, pre, si, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (a = 0; format && format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			buffer[buff_ind++] = format[a];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			p_c++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			f = get_flags(format, &a);
			w = get_width(format, &a, list);
			pre = get_precision(format, &a, list);
			si = get_size(format, &a);
			++a;
			p = handle_print(format, &a, list, buffer,
				f, w, pre, si);
			if (p == -1)
				return (-1);
			p_c += p;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (p_c);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
