#include <stdio.h>
/**
 * main- Prints the alphabet in lowercase.
 * You can only use putchar
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'e' || letters == 'q')
		{continue;}
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
