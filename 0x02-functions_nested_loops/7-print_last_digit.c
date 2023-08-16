#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number which last digit is printed
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n >= 0)
	{
		lastdigit = n % 10;
	} else
	{
		lastdigit = -n % 10;
	}
	_putchar('0' + lastdigit);
	return (lastdigit);
}
