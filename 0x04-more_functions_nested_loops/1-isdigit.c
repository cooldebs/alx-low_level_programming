#include "main.h"

/**
 * _isdigit- a function that checks for a digit (0 through 9).
 * @c: character to be checked.
 * Return: 1 if c is digit, 0 if otherwise.
 */

int _isdigit(int c)
{
	int result;

	if (c >= 0 && c <= 9)
		result = 1;

	else
		result = 0;

	return (result);
}
