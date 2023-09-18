#include <limits.h>
#include <stdio.h>
#include <main.h>

/**
 * main - entry point
 * always return (0).
 */

int main(void)
{
	int len;
	int len1;
	unsigned int ui;
	void addr;

	len = _printf("lets try to print sentes\n");
	len2 = _printf("lets try to print sentes\n");
	ui = (unsigned int) INT_MAX + 1024;
	addr = (void *);
	 _printf("length:[%d, %i]\n" len, len);
	 _printf("length:[%d, %i]\n" len2, len2);
