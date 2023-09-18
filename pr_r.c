#include "main.h"
/**
 * print_rev_string - print a reverses string
 * @args: number of  Arguments
 * Return: Lenght of the print
 */
int print_rev_string(va_list args)
{
	int cou = 0, a = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[a])
	{
		a++;
	}
	while (a >= 0)
	{
		cou += _putchar(s[a]);
		a--;
	}
	cou--;
	return (cou);
}
