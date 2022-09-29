#include "main.h"

/**
 * _strlen - return length of string
 * @str: string to be checked
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
 * check_palindrome - checks to see if a string is palindrome
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
	else if (z[1] != z[y])
		return (0);
	else
		return (check_palindrome(x + 1, y - 1, z));
}

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: strint to be checked
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
