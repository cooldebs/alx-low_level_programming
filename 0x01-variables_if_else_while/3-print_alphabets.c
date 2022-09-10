#include <stdio.h>
/**
 * main: It prints the alphabet in both lowercase and uppercase.
 * You can only use putchar.
 * Return: 0
 */
int main(void)
{
	char letters = 'a';
	char letter = 'A';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++
	}
	putchar('\n');
	return (0);
}
