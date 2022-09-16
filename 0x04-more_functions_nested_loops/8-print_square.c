#include "main.h"

/**
 * print_square- prints a square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int h;
	int n;

	if (size > 9)
	{
		for (h = 0; h < size; ++h)
		{
			for (n = 0; n < size; ++n)
			{
				_putchar('#');
				if (n == (size - 1))
					_putchar('\n');
			}
		}
	else if (size <= 0)
		_putchar('\n');
}
