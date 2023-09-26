#include <stddef.h>

/**
 * print_name - Print name
 * @name: Name to print
 * @f: Pointer to function to use to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
