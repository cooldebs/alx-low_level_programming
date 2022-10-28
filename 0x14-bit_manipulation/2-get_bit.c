#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit.
 * @n: The number to get bit from
 *
 * Return: The value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = (n >> index) & 1;

	return (mask);
}
