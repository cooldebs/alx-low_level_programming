#include "main.h"

/**
 * _strlen - return length of a string
 * @str: string to check
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - checks to see if a string is a palindrome
 * @x: left hand index
 * @y: right hand index
 * @z: possible palindrome
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int check_palindrome(int x, int y, char *z)
{
	if (x >= y)
		return (1);
	else if (z[x] != z[y])
		return (0);
	else
		return (check_palindrome(1 + x, y - 1, z));
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
