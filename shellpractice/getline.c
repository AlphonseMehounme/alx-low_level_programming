#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Simple shell
 *
 * Return: Always 0
 */
int main() {
    int i = 0;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    char **words;
    char *env[] = {NULL};
    char *wordss[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("$ ");
    read = getline(&line, &len, stdin);
    while (read != -1)
    {
        printf("%s", line);
	words = strtab(line);
	for (i = 0; i < 4; i++)
	{
		if (words[i] == NULL)
		{
			printf("(null0)\n");
		} else
		{
			printf("%s\n", words[i]);
		}
	}
	if (execve(words[0], words, env) == -1)
	{
		exit(EXIT_FAILURE);
	}
	free(line);
        line = NULL;
        len = 0;
	printf("$ ");
	read = getline(&line, &len, stdin);
    }
    return 0;
}
