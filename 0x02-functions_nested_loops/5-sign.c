#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks the parity of c
 * @c: c is an int to be checked
 * Return: return 1, or 0 or -1
 */
int print_sign(int c)
{
	if (c > 0)
	{
		putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
												}
}
