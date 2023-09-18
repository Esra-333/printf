#include "main.h"

/**
 * get_function - get a function
 * @con_spec: Conversion specifiers.
 * @args: arguments
 * Return: char count
 */

int get_function(char con_spec, va_list args)
{
	int a = 0;
	int cou = 0;

	specifiers_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{'d', print_digit},
		{'i', print_digit},
		{'r', print_rev_string},
		{0, NULL}
	};
	while (spec[a].specifiers)
	{
		if (con_spec == spec[a].specifiers)
			cou += spec[a].f(args);
		a++;
	}
	if (cou == 0)
	{
		cou += _putchar('%');
		cou += _putchar(con_spec);
	}
	return (cou);
}
