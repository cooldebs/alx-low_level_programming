#include "main.h"
/**
 * print_alphabet_x10- Prints the alphabet in lowercase 10 times.
 * You can only use _putchar twice in your code.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int letter, num;

	num = 0;

	while (num < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		num++;
		_putchar('\n');
	}
}
