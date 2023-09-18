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
	int i, j, k = 0, l, size = 1;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			size++;
		}
	}
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			size++;
		}
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (p);
	}
	if (s1)
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			p[k] = s1[k];
		}
	}
	if (s2)
	{
		for (l = 0; s2[l] != '\0'; l++)
		{
			p[k] = s2[l];
			k++;
		}
	}
	p[k] = '\0';
	return (p);
}
