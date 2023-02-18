#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
