#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	int a, b;
	int f = 0;
	const char f_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int f_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (b = *i + 1; format[b] != '\0'; b++)
	{
		for (a = 0; f_CH[a] != '\0'; a++)
			if (format[b] == f_CH[a])
			{
				f |= f_ARR[a];
				break;
			}

		if (f_CH[a] == 0)
			break;
	}

	*i = b - 1;

	return (f);
}
