#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10times numbers from 0 to 14
 * Return: nothing (void)
 */
 void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 14; i++)
		{
			if (i >= 10)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}	
		putchar('\n');
	}
}
 