#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum of args
 * @n: Number of args
 * Return: SUm of args or à if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (sum);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
