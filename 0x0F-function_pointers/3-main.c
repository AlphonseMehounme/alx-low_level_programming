#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Make simple operations
 * @ac: Number of args
 * @av: Pointer to args
 *
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	char *operator;
	int num1, num2, result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	operator = av[2];
	num2 = atoi(av[3]);
	if (get_op_func(operator) == NULL || operator[1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
