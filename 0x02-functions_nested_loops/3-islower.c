#include "main.h"
/**
 * _islower - checks whether input is lower or upper
 * @c: input to be checked
 * Return: returns 1 or 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
