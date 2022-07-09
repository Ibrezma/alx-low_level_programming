#include "main.h"
/**
 * _isdigit - checks whether input is digit or not
 * @c: input to be checked
 * Return: 1 when c is digit otherwise o
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
