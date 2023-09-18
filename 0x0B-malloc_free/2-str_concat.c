#include <stdlib.h>

/**
 * str_concat - Concat two string and return pointer to the new string
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Pointer to the new string
 * or NULLL if the allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int i, j, k, l, m;
	int size1 = 0, size2 = 0, size = 5;

	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		size2++;
	}
	size = size + size1 + size2;
	p = malloc(sizeof(char) * size);
	if (!p)
	{
		return (p);
	}
	for (l = 0; s1[l] != '\0'; i++)
	{
		p[l] = s1[l];
	}
	k = i;
	for (m = 0; s2[m] != '\0'; m++)
	{
		p[k] = s2[m];
		k++;
	}
	return (p);
}
