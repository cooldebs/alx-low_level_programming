#include <stdio.h>
/**
 * print_alphabet- Used to print the alphabet in lowercase.
 * You can only use _putchar.
 * Return: 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
