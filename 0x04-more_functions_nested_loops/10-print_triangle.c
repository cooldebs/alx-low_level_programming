#include "main.h"

/**
 * print_triangle- prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (j > 0 && j < (i-1) && i > 0 && i < n)
			{
				_putchar('-');
			}
			else
			{
				_putchar('*');
			}
		}
		_putchar('\n');
	}
}
