#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @c: a character in a string
 * @s: string.
 *
 * Return: Pointer when c is found in s, or NULL if otherwise.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
