#include "main.h"
/**
 * _islower- This function checks for lowercase character.
 * Return: 1 if lowercase, 0 if otherwise.
 * @c: c is an ascii character.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{ 
		return (1);
	}
	else 
	{
		return (0);
	}
}
