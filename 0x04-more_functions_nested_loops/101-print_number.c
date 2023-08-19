#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: Integer to print
 */
void print_number(int n)
{
	int count, pow, lastdigit, m;

	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}
	lastdigit = n % 10;
	m = n;
	count = 0;
	pow = 1;
	while (m > 0)
	{
		m = m / 10;
		pow = pow * 10;
		count = count + 1;
	}
	count = count - 1;
	pow = pow / 10;
	while (count > 0)
	{
		_putchar('0' + (n / pow));
		n = n - ((n / pow) * pow);
		count--;
		pow = pow / 10;
	}
	_putchar('0' + lastdigit);
}
