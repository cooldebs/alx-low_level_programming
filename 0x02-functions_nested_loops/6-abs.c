#include "main.h"
#include <stdio.h>
/**
 * _abs- Function that prints the absolute value of an integer.
 * @n: Integer input.
 * Return: Absolue value of n.
 */
int _abs(int n)
{
	n = _abs(-1);
	printf("%d\n", n);
	n = _abs(0);
	printf("%d\n", n);
	n = _abs(-50);
	printf("%d\n", n);
	n = _abs(1);
	printf("%d\n", n);
}
