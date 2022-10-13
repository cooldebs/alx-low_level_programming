#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function that returns the sum of a and b.
 * @a: first input integer
 * @b: second input integer
 *
 * Return: The result of a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtration of a & b.
 * @a: first input integer
 * @b: second input integer
 *
 * Return: The result of a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of a and b.
 * @a: first input integer
 * @b: second input integer
 *
 * Return: The result of a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of a and b.
 * @a: first input integer.
 * @b: second input integer
 *
 * Return: The result of a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the module of a and b
 * @a: first input integer.
 * @b: second input integer.
 *
 * Return: The result of a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

