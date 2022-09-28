#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @needle: substring to find in haystack.
 * @haystack: string to be checked.
 *
 * Return: pointer to beginning of needle in haystack, or NULL if otherwise.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && haystack[i] == needle[0])
		{
			if (haystack[i] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
