#include "main.h"

/**
 * _isupper- a function that checks for uppercase character.
 * @c: character to be checked.
 * Return: 1 if lowercase, 0 if otherwise.
 */
int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;

	return (result);
}
