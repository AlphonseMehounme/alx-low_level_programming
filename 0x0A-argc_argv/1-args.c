#include "main.h"

/**
 * main - Prints the number of args
 * @argc: Number of args
 * @argv: Pointer to args
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	print_number(argc - 1);
	_putchar('\n');
	return (0);
}
