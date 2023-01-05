#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string type input
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
