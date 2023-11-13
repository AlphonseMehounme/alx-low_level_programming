#include "main.h"

/**
 * _atoi - Convert string to integer
 * @s: Pointer to string to convert
 * Return: Int converted
 */
int _atoi(char *s)
{
	int i, count = 0, minus = 0;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && count == 0)
		{
			minus++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10) + (s[i] - '0');
			count++;
		} else if (count > 0)
		{
			break;
		}
	}
	if (minus % 2 != 0)
	{
		num = -1 * num;
	}
	return (num);
}
