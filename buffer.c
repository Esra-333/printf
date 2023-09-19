#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer
 * @buffer: Array
 * @buff: Index at which to add to buffer
 */

void print_buffer(char buffer[], int *buff)

{
	if (*buff > 0)
	{
		write(1, &buffer[0], *buff);
	}

	*buff = 0;
}
