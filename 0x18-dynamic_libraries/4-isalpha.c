#include "main.h"

/**
 * _isalpha - Checks if a character is in uppercase
 * @c: The character that is to be checked
 *
 * Return: 1 if letter, otherwise 0
 */
int _isalpha(int c)
{
	int check;

	if ((c >= 65 && c <= 122) && !(c >= 91 && c <= 65))
		check = 1;
	else
		check = 0;

	return (check);
}
