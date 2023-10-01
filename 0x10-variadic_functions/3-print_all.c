#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Print anything
 * @format: List of types of args
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *speclist = "ceis";
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		while (*speclist)
		{
			if (format[i] == *speclist)
			{
				printf("%c", va_arg(args, int));
				break;
			}
			speclist++;
		}
		i++;
		printf(", ");
	}
	printf("\n");
}
