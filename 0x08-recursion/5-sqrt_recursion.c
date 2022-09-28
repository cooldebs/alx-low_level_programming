#include "main.h"

/**
 * multiply - multiplies an integer with itself
 * @x: The integer
 * @y: A number
 *
 * Description: checks if x * x == y
 * Return: x if x * x == y, otherwise -1
 */
int multiply(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (multiply(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (multiply(1, n));
}
