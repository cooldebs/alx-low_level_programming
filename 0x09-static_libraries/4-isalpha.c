#include "main.h"
/**
 * _isalpha- This function checks for alphabetic character.
 * Return: 1 if c is a letter, lowercase or uppercase.
 * @c: c is an ascii character.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
