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

	count = 0;

	if (min > max)
		return (NULL);
	count = ((max + 1) - min);
	p = malloc(count + sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		*(p + i) = min + i;
	return (p);
}
