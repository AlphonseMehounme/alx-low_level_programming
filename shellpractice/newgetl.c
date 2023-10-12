#include <stdio.h>

int main(void)
{
	char *line;
	size_t len;
	ssize_t read;

	read = getline(&line, &len, stdin);
	if (read != -1)
	{
		printf("%s\n", line);
	}
	return (0);
}
