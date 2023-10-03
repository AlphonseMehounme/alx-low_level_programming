#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - Read file and print to stdout
 * @filename: Filename
 * @letters: Number of byte to write
 *
 * Return: Number of byte printed or à if failed
 */
size_t read_textfile(const char *filename, size_t letters)
{
	size_t wr;
	int op, rd;
	char *c = malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	if (c == NULL)
	{
		return (0);
	}
	rd = read(op, c, letters);
	if (rd == -1)
	{
		return (0);
	}
	wr = write(STDOUT_FILENO, c, letters);
	if (wr <= 0)
	{
		return (0);
	}
	return (wr);

}
