#include "main.h"

/**
 * _strstr -  a function that locates a substring
 * @haystack: a string to find substring in
 * @needle: substring to find match of
 * Return: a pointer to needle in haystack, or NULL if otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack != '\0')
	{
		k = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, k++;
		if (*needle == '\0')
			return (haystack - k);
		haystack -= (k - 1), needle -= k;
	}
	return ('\0');
}
