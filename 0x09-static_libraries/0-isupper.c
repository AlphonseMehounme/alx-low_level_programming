#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Character to be checked
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	int res;

	if (c >= 65 && c <= 90)
	{
		res = 1;
	} else
	{
		res = 0;
	}
	return (res);
}
