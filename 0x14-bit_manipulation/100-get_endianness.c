#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *)&x;

	if (*y)
		return (1);
	return (0);
}
