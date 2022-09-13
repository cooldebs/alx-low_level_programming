#include "main.h"
#include <stdio.h>
/**
 * _abs: Function to check the absolute value of an integer.
 * @n: This is the integer input.
 * Return: Absolute value of n.
 */
int _abs(int)
{
	int n;

	n = _abs(-1);
	printf("%d\n", n);
	n = _abs(0);
	printf("%d\n", n);
	n = _abs(1);
	printf("%d\n", n);
	n = _abs(-50);
	printf("%d\n", n);
}
