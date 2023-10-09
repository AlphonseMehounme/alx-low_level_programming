#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * strtab - Split string to array of strings
 * @str: String to split
 *
 * Return: Pointer to array of strings
 */
char **strtab(char *str)
{
	char **astr;
	char *word;
	int i = 0;

	astr = malloc(sizeof(char *));
	if (astr == NULL)
	{
		return (NULL);
	}
        word = strtok(str, " ");
	while (word != NULL)
	{
		astr[i] = malloc(strlen(word) + 1);
		if (astr[i] == NULL)
		{
			free(astr);
			return (NULL);
		}
		strcpy(astr[i], word);
		i++;
		word = strtok(NULL, " ");
	}
	astr[i] = NULL;
	return (astr);
}
