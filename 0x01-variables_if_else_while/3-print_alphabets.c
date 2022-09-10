#include <stdio.h>
/**
 * main- It prints alphabet in both lowercase and uppercase.
 * You can only use the putchar function.
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'A'; letters <= 'z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
