#include "main.h"
#include <string.h>

/**
 * rev_string - Function that reverse a string
 * @s: String to reverse
 */
void rev_string(char *s)
{
	char t[50];
	int i, j, k = 0, count = 0;

	strcpy(t, s);
	for (i = 0; t[i] != '\0'; i++)
	{
		count++;
	}
	count--;
	for (j = count; j >= 0; j--)
	{
		s[k] = t[j];
		k++;
	}
}
