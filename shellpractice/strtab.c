#include "main.h"


char** parse_commands(const char* input)
{
    char** commands = NULL;
    char* token;
    int command_count = 0;

    commands = (char**)malloc(sizeof(char*));
    if (commands == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    char input_copy[MAX_COMMAND_LENGTH];
    strncpy(input_copy, input, sizeof(input_copy));
    input_copy[sizeof(input_copy) - 1] = '\0';
    token = strtok(input_copy, " \t\n");
    while (token != NULL)
    {
        commands[command_count] = strdup(token);
        if (commands[command_count] == NULL)
	{
            perror("strdup");
            exit(EXIT_FAILURE);
        }
        command_count++;
        commands = (char**)realloc(commands, (command_count + 1) * sizeof(char*));
        if (commands == NULL)
	{
            perror("realloc");
            exit(EXIT_FAILURE);
        }
        token = strtok(NULL, " \t\n");
    }
    commands[command_count] = NULL;
    return commands;
}
