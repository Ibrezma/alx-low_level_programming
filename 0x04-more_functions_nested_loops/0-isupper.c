#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if input is uppercase
 * @c: character to be checked
 * Return: return 1 when c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
