#include <stdio.h>
/**
 * main- It prints the alphabet in both lowercase and uppercase.
 * You can only use the putchar function.
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
