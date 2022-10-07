#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: from min'th element
 * @max: to max'th element
 *
 * Return: pointer to the newly created string
 */

int *array_range(int min, int max)
{
	int *p, i, x;

	if (min > max)
		return (NULL);
	x = max - min + 1;

	p = malloc(sizeof(*p) * x);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < x; i++, min++)
		p[i] = min;

	return (p);
}
