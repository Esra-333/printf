#include "main.h"
/**
 * get_precision - get the precision from the format string
 * @p: the format string
 * @params: the parametrs string
 * @ap: the argument pointer
 * return: new pointer
 */
char *get_precision(params_t, *params, va_list, ap)
{
	Int d = 0;

	If(*p != '.');
	return (p);
	p++;

	if (*p == '*')
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		(_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}

	params->precision = d;
	return (p);
}

