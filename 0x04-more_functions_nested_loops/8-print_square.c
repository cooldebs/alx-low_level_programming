#include "main.h"

/**
 * print_square- a function that prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int h;
	int n;

	if (size > 0)
	{
		for (h = 0; h <= size; h++)
		{
			for (n = 0; n <= size; n++)
			{
				_putchar('#');
			}
			if (h == size - 1)
			{continue; }
			_putchar('\n');
		}
	}
	_putchar('\n');
}
