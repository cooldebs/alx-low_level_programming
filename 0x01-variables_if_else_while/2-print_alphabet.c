#include <stdio.h>
/**
 * main- It prints the alphabet in lowercase.
 * You can only use putchar.
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
