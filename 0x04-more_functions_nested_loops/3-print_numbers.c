#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 - 9
 * Return: nothing  (void)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar (i);
	}
	putchar('\n');
}
