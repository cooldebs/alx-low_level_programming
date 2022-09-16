#include "main.h"

/**
 * print_line- draws a straight line in the terminal
 * You can only use _putchar function to print
 * @n: Number of _ to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
