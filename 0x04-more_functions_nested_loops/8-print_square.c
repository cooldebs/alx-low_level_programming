#include "main.h"

/**
 * print_square- prints a square
 * @size: size of the square
 *
 * Return: void;
 */
void print_square(int size)
{
	int n;
	int i;

	if (size > 0)
	{
		for (n = 0; n < size; ++n)
		{
			for (i = 0; i < size; ++i)
			{
				_putchar('#');
				if (i == (size - 1))
					_putchar('\n');
			}
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
