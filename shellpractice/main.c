#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

int main() {
    int status;
    int i;
    char input[MAX_COMMAND_LENGTH];
    pid_t child_pid;
    char** commands;
    char **env = {NULL};

    while (1) {
        printf("$ ");
        fgets(input, sizeof(input), stdin);
        if (feof(stdin)) {
            printf("\n");
            break;
        }
        commands = parse_commands(input);
        child_pid = fork();
        if (child_pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        if (child_pid == 0) {
            execve(commands[0], commands, env);
            perror("execve");
            exit(EXIT_FAILURE);
        } else {
            waitpid(child_pid, &status, 0);
        }
        for (i = 0; commands[i] != NULL; i++) {
            free(commands[i]);
        }
        free(commands);
    }
    return 0;
}
