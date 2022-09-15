#include "main.h"

/**
 * main- a function that checks for uppercase character.
 * @c: character to be checked.
 * Return: 1 if uppercase, 0 if lowercase.
 */

int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 1;

	else
		result = 0;

	return (result);
}
