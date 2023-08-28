#include <stdio.h>
#include "main.h"

/**
 * main - Print the value of an int
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int age = 25;
	int *pAge = &age;

	printf("Your age is %d.\n", *pAge);
	printf("The address is %p.\n", pAge);
	age = *pAge + 1;
	printf("After one year your age will be %d.\n", age);
	printf("But your address still %p.\n", pAge);
	return (0);
}
