#include "main.h"
#include <stdio.h>
/**
 * main: check the code.
 * _abs- Function to print the absolute value of an integer.
 * @n: This is the integer input.
 * Return: 0
 */
int main(void)
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
	return (0);
}
