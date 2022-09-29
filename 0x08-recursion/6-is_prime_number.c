#include "main.h"

/**
 * modulos - checks for the remainder after division
 * @x: the divisor
 * @y: the number
 *
 * Return: 0 if there is remainder, 1 if otherwise
 */

int modulos(int x, int y)
{
	if (x == y)
		return (1);
	if (!(y % x))
		return (0);
	return (modulos(x + 1, y));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: The number
 *
 * Return: 1 if prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (modulos(2, n));
}
