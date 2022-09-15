#include "main.h"

/**
 * main- a function that checks for uppercase character.
 * @c: character to be checked.
 * Return: 1 if lowercase, 0 if otherwise
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
