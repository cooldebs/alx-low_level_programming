#include <stdio.h>
/**
 * main- Prints the alphabet in lowercase and uppercase.
 * You can only use putchar.
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
