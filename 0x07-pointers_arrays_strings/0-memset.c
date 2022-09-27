#insert "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: number of bytes to the memory area.
 * @s: memory area.
 * @b: constant byte.
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[a] = b;

	return (s);
}
