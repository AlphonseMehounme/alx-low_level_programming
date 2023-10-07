#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    printf("$ ");
    read = getline(&line, &len, stdin);
    if (read != -1)
    {
        printf("%s", line);
        free(line);
        line = NULL;
        len = 0;
    }
    return 0;
}
