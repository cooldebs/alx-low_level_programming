#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: The number
 *
 * Return: -1 if n < 0 to indicate an error, 1 if otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
