#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * str_concat - concatenates strings
 *   * @s1: first string
 *    * @s2: second string
 *     * Return: NULL or failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int q;
	unsigned int r;

	char *s;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)

			;
	}
	q = i + j + 1;
	s = malloc(q * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (r = 0; r < i; ++r)
		s[r] = s1[r];
	for  (r = 0; r < j; ++r)
		s[r + i] = s2[r];
	s[i + j] = '\0';
	return (s);

}
