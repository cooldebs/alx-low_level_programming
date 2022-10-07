#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: from min'th element
 * @max: to max'th element
 *
 * Return: pointer to the newly created string
 */
int *array_range(int min, int max)
{
	int count, i;
	int *p;

	if (min > max)
		return (NULL);
	count = max - min + i;

	p = malloc(sizeof(*p) * count);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		p[i] = min;

	return (p);
}
