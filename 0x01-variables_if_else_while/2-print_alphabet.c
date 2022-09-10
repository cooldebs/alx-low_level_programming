#include <stdio.h>
/**
 * main- It prints the alphabet as lowercase.
 * You can only use the putchar function.
 * Return: 0
 */
int main(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
