#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer
 * @buffer: Array 
 * @buff_ind: Index at which to add to buffer
 */

void print_buffer(char buffer[], int *buffer);
{
	if (*buffer > 0)
		write(1, &buffer[0], *buffer);

	*buffer = 0;
}
