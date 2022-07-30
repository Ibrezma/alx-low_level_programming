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
	int i;
	int size;
	int *arr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
}
