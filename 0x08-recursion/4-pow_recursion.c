#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x ^ y.
 * @x: The base number
 * @y: The exponent
 *
 * Return: -1 if y < 0, 1 if otherwise.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
