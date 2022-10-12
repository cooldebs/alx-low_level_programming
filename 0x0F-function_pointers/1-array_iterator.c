#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (action == NULL || array == NULL)
		return;
	for (; x < size; x++)
		action(array[x]);
}
