#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	int mid = len / 2;
	char tmp;

	for (i = 0; i < middle; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
