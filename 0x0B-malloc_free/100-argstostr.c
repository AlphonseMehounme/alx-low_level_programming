#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the program args to str
 * @ac: Number of args
 * @av: Pointer ot program args
 *
 * Pointer to a new string or NULL if failed, ac = 0 or av = NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0;
	int i, j , k, l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		count += strlen(av[i]);
	}
	str = malloc(sizeof(char) * (count + ac));
	if (str == NULL)
	{
		return (str);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			str[l] = av[j][k];
			l++;
		}
		str[l] = '\n';
		l++;
	}
	str[l + 1] = '\0';
	return (str);
}
