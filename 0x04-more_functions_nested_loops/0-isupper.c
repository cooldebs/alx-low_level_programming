#include "main.h"

/**
 * main- a function that checks for uppercase character.
 * @c: The charcter to be checked.
 * Return: 1 if uppercase, 0 if lowercase.
 */

int _isupper(int c)
{
	int upper = 1;
	int lower = 0;

	if(c >= 'A' and c <= 'Z')
		return upper;
	
	else
		return lower;
}
