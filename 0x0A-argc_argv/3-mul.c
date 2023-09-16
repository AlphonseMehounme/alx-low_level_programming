#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two int args and print the result
 * @argc: Number of args
 * @argv: Pointer to args
 *
 * Return: 0 if successfull and 1 if less than 2 args
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc == 2)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	return (1);
}
