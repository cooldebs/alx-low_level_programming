#insert "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @b: constant byte
 * @s: memory area
 * @n: number of bytes to the memory area
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		*s[c] = b;
	return (s);
}
