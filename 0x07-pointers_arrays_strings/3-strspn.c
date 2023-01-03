#include <stdio.h>

/**
 * *_strspn - a function that gets the length of a prefix substring
 * @s: a string input
 * @accept: an input character with to locate into string s
 * Return: Returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *toaccept = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}

		s++;
		accept = toaccept;
		if (flag == 0)
			break;
	}
	return (count);
}
