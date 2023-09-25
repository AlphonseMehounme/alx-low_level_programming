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
	unsigned int i, j = 0, k, size = 1, size1 = 0, size2 = 0;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = strlen(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = strlen(s2);
	if (n >= size2)
		n = size2;
	size += size1 + size2;
	s = malloc(size);
	if (s == NULL)
		return (s);
	for (i = 0; i < size1; i++)
	{
		if (s1 == NULL)
			break;
		s[i] = s1[i];
	}
	for (k = i; k < size1 + n; k++)
	{
		if (s2 == NULL)
			break;
		s[k] = s2[j];
		j++;
	}
	s[k] = '\0';
	return (s);
}
