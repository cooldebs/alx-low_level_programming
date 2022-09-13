#include "main.h"
/**
 * print_last_digit- Prints the last digit of a number.
 * @dv: The result of the last digit of a number.
 * Return: Value of the last digit.
 */
int print_last_digit(int dv)
{
	int dm;

	dm = (dv % 10);

	if (dm < 0)
	{
		dm = (-1 * dm);
	}
	_putchar(dm + '0');
	return (dm);
}
	
