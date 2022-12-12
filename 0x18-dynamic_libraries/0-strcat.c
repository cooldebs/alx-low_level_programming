#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @src: string to be concatenated upon.
 * @dest: string to be appended.
 *
 * @dest: string to be appended.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
