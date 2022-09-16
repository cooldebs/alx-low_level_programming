#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: character to be checked.
 *
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
		result = 1;
	else
		result = 0;

	return (result);
}
