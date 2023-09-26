#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: Strings separator
 * @n: Number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *c;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char *);
		if (c == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", c);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
