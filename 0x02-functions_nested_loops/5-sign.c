#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: The number whose sign the function prints
 * Return: 1 if n is greater than 0
 * 0 if n is 0 and -1 if n is less than 0
 */
int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		res = 1;
		_putchar('+');
	} else if (n == 0)
	{
		res = 0;
		_putchar('0');
	} else
	{
		res = -1;
		_putchar('-');
	}
	return (res);
}
