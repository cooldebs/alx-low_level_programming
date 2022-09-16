#include "main.h"

/**
 * print_diagonal- draws a diagonal line on the terminal.
 * @n: number of / to be printed.
 *
 */
void print_diagonal(int n)
{
	int count;
	int i;

	count = 0;
	while (i > 0)
	{
		i = 0;
		count += 1;
		_putchar ('\\');
		if (n != 1)
			_putchar('\n');
		n -= 1;
		while (n > 0 && i < count)
		{
			_putchar(' ');
			i++;
		}
	}
	
	if (n <= 0)
		_putchar('\n');
}
