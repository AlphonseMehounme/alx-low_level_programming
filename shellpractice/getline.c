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
    pid_t PID;
    int status;

    printf("$ ");
    read = getline(&line, &len, stdin);
    while (read != -1)
    {
	    PID = fork();
	    if (PID == 0)
	    {
		    if (execve(words[0], words, env) == -1)
		    {
			    exit(EXIT_FAILURE);
		    }
	    } else
		    wait(&status);
	free(line);
        line = NULL;
        len = 0;
	printf("$ ");
	read = getline(&line, &len, stdin);
    }
    return 0;
}
