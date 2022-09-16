#include "main.h"

/**
 * more_numbers- prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 48, b = 48, c, a;

	for (a = 0; a < 10; a++)
	{
		while (b < 53)
		{
			if (i <= 57)
				c = i++;
			else
				c = 49;
			_putchar(c);

			if (i == 58 && c == 49)
				_putchar(b++);
		}
		i = 48, b = 48;
		_putchar('\n');
	}
}
