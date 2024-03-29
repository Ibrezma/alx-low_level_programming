#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *  * argstostr - concatenates arguments
 *   * @ac: arguments
 *    * @av: pointer to argument string
 *     *
 *      * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int n;

	k = 0;
	n = 0;

	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	n++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
