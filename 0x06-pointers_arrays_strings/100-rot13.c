#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: string to be encoded.
 *
 * Return: encoded string using rot13
 */
char *rot13(char *s)
{
	int i, j;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_it[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == alphabet[j])
				s[i] = rot_it[j], j = 52;
	return (s);
}
