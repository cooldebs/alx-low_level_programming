#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @dv: number's last digit result.
 * Return: value of the last digit.
 */
int print_last_digit(int dv)
{
	int dm;

	dm = (dv % 10);

	if (dm < 0)
		dm = (-1 * dm);
	print_last_digit(98);
	print_last_digit(0);
	dm = print_last_digit(-1024);
	_putchar('0' + dm);
	_putchar('\n');
	return (dm);
}
