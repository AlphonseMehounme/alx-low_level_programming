#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to a string
 * @to: pointer to string to set s to
 * Return: Desc returned value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
