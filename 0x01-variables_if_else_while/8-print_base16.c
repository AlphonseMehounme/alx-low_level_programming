#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char alp;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (alp = 'a'; alp < 'g'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
