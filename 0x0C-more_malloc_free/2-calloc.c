#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 *  * _calloc - allocates memory to an array
 *   * @nmemb: array
 *    * @size: number of bytes
 *     * Return: pointer to allocated memory
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	void *arr;

	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;

	return (a);
}
