#include <stdio.h>
/**
 * main- Prints the lowercase in the reverse.
 * You can only use the putchar function.
 * Return: 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
