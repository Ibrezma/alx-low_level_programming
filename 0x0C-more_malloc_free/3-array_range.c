#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 *  * array_range - creates array form min to max
 *   * @min: statring point
 *    * @max: ending point
 *     * Return: returns ptr to newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
