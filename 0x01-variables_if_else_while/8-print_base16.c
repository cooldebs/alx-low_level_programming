#include <stdio.h>
/**
 * main- Prints all the numbers of base 16 in lowercase.
 * You can only use putchar.
 * All your code should be in the main function.
 * Return: 0
 */
int main(void)
{
	int m;
	char letter;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
