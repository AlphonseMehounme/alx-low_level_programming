#include <stdlib.h>

/**
 * _strdup - Return a function to a newly allocated memory with copy of str
 * @str: Pointer to string to copy
 * Return: Pointer to the new allocated memory
 * NULL if str is NULL and NULL if not enough space allcated
 */
char *_strdup(char *str)
{
	char *p = NULL;
	int i, size = 1;

	if (str == NULL)
	{
		return (p);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (p);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
