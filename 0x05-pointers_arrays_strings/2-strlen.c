#include "main.h"
#include <stdio.h>
/**
 * _strlen - counts the length of string
 * @s: string to be counted
 * Return: returns the length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count += 1;
	}

}
