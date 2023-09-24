#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concat two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * @n: Number of character of s2 to add to s1
 *
 * Return: Pointer to the new string if successful
 * NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	long unsigned int i, j, size = 1;

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	size += strlen(s1) + strlen(s2);
	s = malloc(size);
	if (s == NULL)
	{
		return (s);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		s[i] = s1[i];
	}
	j = 0;
	for (; i < strlen(s1) + n; i++)
	{
		s[i] = s2[j];
		j++;
	}
	s[i] = '\0';
	return (s);
}
