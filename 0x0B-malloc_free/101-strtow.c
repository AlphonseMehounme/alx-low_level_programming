#include <stdlib.h>

/**
 * strtow - String to words
 * @str: Pointer to string to turn into words
 * Return: Pointer to words
 * or NULL if failed, str == NULL or str == ""
 */
char **strtow(char *str)
{
	int i, j = 0, k, cout = 0;
	char **words;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != " ")
		{
			while (str[i] != " ")
			{
				count++;
			}
			j++;
		}
	}
	words = malloc(sizeof(char *) * j);
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '\0')
		{
		}
	}
}
