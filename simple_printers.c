#include "main.h"
/**
 * print from to - print the a rang of char address
 * @start: starting address
 * @stop: stoppong address
 * @except: number bytes printed
 */
int print_from_to(char *star, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchar(*start);
		start++;
	}
	return (sum);
}
/**
 * print_rev - prints string is reverse
 * @ap: atring
 * @params: the parameters struct
 * return: number bytes printed
 */
int print_rev(va_list ap, params_t, params)
{
	int len, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str++;
		for (; len > 0, len--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}
/**
 * print_rot13 - prints string in rot13
 * @ap: string
 * @params: the parameters struc
 * return: number bytes printed
 */
int print_rot13(va_list ap, params_t, params)
{
	i = 0;
	int count = 0;
	char arr []
		"NOPQRSTUVWXYZABCDEFGHIJKLM  nopqrstuvwxyzabcdefgijklm";
	char *a = va_arg(ap, char*);
	(void)params;

	int i = 0;
	index = 0;

	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			index = a[i] - 65;
			count += _putchar(arr[index];
					}
					else
					count += _putchar(a[i]);
					i++;
					}
					return (count);
					}

