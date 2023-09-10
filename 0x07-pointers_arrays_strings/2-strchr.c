#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search in
 * @c: Character to search for
 *
 * Return: Pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i, count = 0;
	char *p = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			count++;
			break;
		}
	}
	if (!count)
	{
		return p;
	}
	return (s + i);
}
