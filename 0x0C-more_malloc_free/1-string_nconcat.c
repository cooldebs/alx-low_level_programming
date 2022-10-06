#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates and returns string length.
 * @string: string
 *
 * Return: length of string
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concat from string 2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptstr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /* take NULL strings into account */
		s1 = "";
	if (s2 == NULL)
		s2 = ""; /* account for - n bytes */
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2)) /* account for n too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptstr = malloc(sizeof(*ptstr) * len); /* malloc and check for error */
	if (ptstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptstr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptstr[i + j] = s2[j];
	ptstr[i + j] = '\0';

	return (ptstr);
}
